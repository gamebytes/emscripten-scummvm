/* ScummVM - Scumm Interpreter
 * Copyright (C) 2002 The ScummVM project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * $Header$
 */

#include <ctype.h>

#include "stdafx.h"
#include "newgui.h"
#include "dialog.h"
#include "widget.h"

/*
 * TODO list
 * - If saving or loading fails (e.g. due to disk full/directory write protected),
 *   display an error dialog?
 * - The user can edit the name of the autosave game. Of course this will not
 *   do anything, but we should still prevent this.
 * - add some sense of the window being "active" (i.e. in front) or not. If it 
 *   was inactive and just became active, reset certain vars (like who is focused).
 *   Maybe we should just add lostFocus and receivedFocus methods to Dialog, just
 *   like we have for class Widget?
 * ...
 */

Dialog::~Dialog()
{
	Widget *w = _firstWidget, *next;
	while (w) {
		next = w->_next;
		w->_next = 0;
		delete w;
		w = next;
	}
	_firstWidget = 0;
}

int Dialog::runModal()
{
	// Open up
	open();
	
	// Start processing events
	_gui->runLoop();
	
	// Return the result code
	return _result;
}

void Dialog::open()
{
	Widget *w = _firstWidget;
	
	_result = 0;
	_visible = true;
	_gui->openDialog(this);
	
	// Search for the first objects that wantsFocus() (if any) and give it the focus
	while (w && !w->wantsFocus()) {
		w = w->_next;
	}
	
	if (w) {
		w->receivedFocus();
		_focusedWidget = w;
	}
}

void Dialog::close()
{
	_visible = false;
	_gui->closeTopDialog();

	if (_mouseWidget) {
		_mouseWidget->handleMouseLeft(0);
		_mouseWidget = 0;
	}
	releaseFocus();
}

void Dialog::releaseFocus()
{
	if (_focusedWidget) {
		_focusedWidget->lostFocus();
		_focusedWidget = 0;
	}
}


void Dialog::draw()
{
	_gui->_needRedraw = true;
}

void Dialog::drawDialog()
{
	Widget *w = _firstWidget;
	
	if (!isVisible())
		return;

	_gui->blendRect(_x, _y, _w, _h, _gui->_bgcolor);
	_gui->box(_x, _y, _w, _h);

	while (w) {
		w->draw();
		w = w->_next;
	}

	_gui->addDirtyRect(_x, _y, _w, _h);
}

void Dialog::handleMouseDown(int x, int y, int button, int clickCount)
{
	Widget *w;
	w = findWidget(x, y);

	// If the click occured inside a widget which is not the currently
	// focused one, change the focus to that widget.
	// TODO: use the wantsFocus() method to objects, so that only fields
	// that want it get the focus (like edit fields, list field...)
	// However, right now we "abuse" the focus also for the click&drag
	// behaviour of buttons. This should probably be changed by adding
	// a nother field, e.g. _clickedWidget or _dragWidget.
	if (w && w != _focusedWidget) {
		// The focus will change. Tell the old focused widget (if any)
		// that it lost the focus.
		releaseFocus();
	
		// Tell the new focused widget (if any) that it just gained the focus.
		if (w)
			w->receivedFocus();
	
		_focusedWidget = w;
	}

	if (w && w == _focusedWidget)
		_focusedWidget->handleMouseDown(x - _focusedWidget->_x, y - _focusedWidget->_y, button, clickCount);
}

void Dialog::handleMouseUp(int x, int y, int button, int clickCount)
{
	Widget *w;
	
	if (_focusedWidget) {
		w = _focusedWidget;
		
		// Lose focus on mouseup unless the widget requested to retain the focus
		if (! (_focusedWidget->getFlags() & WIDGET_RETAIN_FOCUS )) {
			releaseFocus();
		}

	} else {
		w = findWidget(x, y);
	}

	if (w)
		w->handleMouseUp(x - w->_x, y - w->_y, button, clickCount);
}

void Dialog::handleMouseWheel(int x, int y, int direction)
{
	Widget *w;

	// This may look a bit backwards, but I think it makes more sense for
	// the mouse wheel to primarily affect the widget the mouse is at than
	// the widget that happens to be focused.

	w = findWidget(x, y);
	if (!w)
		w = _focusedWidget;
	if (w)
		w->handleMouseWheel(x, y, direction);
}

void Dialog::handleKeyDown(char key, int modifiers)
{
	if (_focusedWidget) {
		if (_focusedWidget->handleKeyDown(key, modifiers))
			return;
	} else {
		// Hotkey handling
		Widget *w = _firstWidget;
		key = toupper(key);
		while (w) {
			if (w->_type == kButtonWidget && key == toupper(((ButtonWidget *)w)->_hotkey)) {
				// We first send a mouseDown then a mouseUp.
				// FIXME: insert a brief delay between both.
				w->handleMouseDown(0, 0, 1, 1);
				w->handleMouseUp(0, 0, 1, 1);
				return;
			}
			w = w->_next;
		}
	}

	// ESC closes all dialogs by default
	if (key == 27)
		close();
	
	// TODO: tab/shift-tab should focus the next/previous focusable widget
}

void Dialog::handleKeyUp(char key, int modifiers)
{
	// Focused widget recieves keyup events
	if (_focusedWidget)
		_focusedWidget->handleKeyUp(key, modifiers);
}

void Dialog::handleMouseMoved(int x, int y, int button)
{
	Widget *w;
	
	if (_focusedWidget) {
		w = _focusedWidget;
		
		// We still send mouseEntered/Left messages to the focused item
		// (but to no other items).
		bool mouseInFocusedWidget = (x >= w->_x && x < w->_x + w->_w && y >= w->_y && y < w->_y + w->_h);
		if (mouseInFocusedWidget && _mouseWidget != w) {
			_mouseWidget = w;
			w->handleMouseEntered(button);
		} else if (!mouseInFocusedWidget && _mouseWidget == w) {
			_mouseWidget = 0;
			w->handleMouseLeft(button);
		}

		w->handleMouseMoved(x - w->_x, y - w->_y, button);
	}

	w = findWidget(x, y);

	if (_mouseWidget != w) {
		if (_mouseWidget)
			_mouseWidget->handleMouseLeft(button);
		if (w)
			w->handleMouseEntered(button);
		_mouseWidget = w;
	} 

	if (!w || !(w->getFlags() & WIDGET_TRACK_MOUSE)) {
		return;
	}
	
	w->handleMouseMoved(x - w->_x, y - w->_y, button);
}

void Dialog::handleTickle()
{
	// Focused widget recieves tickle notifications
	if (_focusedWidget && _focusedWidget->getFlags() & WIDGET_WANT_TICKLE) {
		_focusedWidget->handleTickle();
	}
}

void Dialog::handleCommand(CommandSender *sender, uint32 cmd, uint32 data)
{
	switch (cmd) {
	case kCloseCmd:
		close();
		break;
	}
}

/*
 * Determine the widget at location (x,y) if any. Assumes the coordinates are
 * in the local coordinate system, i.e. relative to the top left of the dialog.
 */
Widget *Dialog::findWidget(int x, int y)
{
	Widget *w = _firstWidget;
	while (w) {
		// Stop as soon as we find a widget that contains the point (x,y)
		if (x >= w->_x && x < w->_x + w->_w && y >= w->_y && y < w->_y + w->_h)
			break;
		w = w->_next;
	}
	return w;
}

ButtonWidget *Dialog::addButton(int x, int y, const ScummVM::String &label, uint32 cmd, char hotkey)
{
	return new ButtonWidget(this, x, y, kButtonWidth, 16, label, cmd, hotkey);
}

PushButtonWidget *Dialog::addPushButton(int x, int y, const ScummVM::String &label, uint32 cmd, char hotkey)
{
	return new PushButtonWidget(this, x, y, kButtonWidth, 16, label, cmd, hotkey);
}

