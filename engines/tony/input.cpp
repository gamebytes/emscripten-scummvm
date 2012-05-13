/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */
/**************************************************************************
 *                                     様様様様様様様様様様様様様様様様様 *
 *                                             Nayma Software srl         *
 *                    e                -= We create much MORE than ALL =- *
 *        u-        z$$$c        '.    様様様様様様様様様様様様様様様様様 *
 *      .d"        d$$$$$b        "b.                                     *
 *   .z$*         d$$$$$$$L        ^*$c.                                  *
 *  #$$$.         $$$$$$$$$         .$$$" Project: Roasted Moths........  *
 *    ^*$b       4$$$$$$$$$F      .d$*"                                   *
 *      ^$$.     4$$$$$$$$$F     .$P"     Module:  Input.CPP............  *
 *        *$.    '$$$$$$$$$     4$P 4                                     *
 *     J   *$     "$$$$$$$"     $P   r    Author:  Giovanni Bajo........  *
 *    z$   '$$$P*4c.*$$$*.z@*R$$$    $.                                   *
 *   z$"    ""       #$F^      ""    '$c                                  *
 *  z$$beu     .ue="  $  "=e..    .zed$$c                                 *
 *      "#$e z$*"   .  `.   ^*Nc e$""                                     *
 *         "$$".  .r"   ^4.  .^$$"                                        *
 *          ^.@*"6L=\ebu^+C$"*b."                                         *
 *        "**$.  "c 4$$$  J"  J$P*"    OS:  [ ] DOS  [X] WIN95  [ ] PORT  *
 *            ^"--.^ 9$"  .--""      COMP:  [ ] WATCOM  [X] VISUAL C++    *
 *                    "                     [ ] EIFFEL  [ ] GCC/GXX/DJGPP *
 *                                                                        *
 * This source code is Copyright (C) Nayma Software.  ALL RIGHTS RESERVED *
 *                                                                        *
 **************************************************************************/

#include "tony/gfxengine.h"

namespace Tony {

RMInput::RMInput() {
	// Setup mouse fields
	_clampMouse = false;	
	_mousePos.Set(0, 0);
	_leftButton = _rightButton = false;;

	_leftClickMouse = _leftReleaseMouse = false;
	_rightClickMouse = _rightReleaseMouse = false;

	// Setup keyboard fields
	Common::fill(&_keyDown[0], &_keyDown[350], 0);
}

RMInput::~RMInput() {

}

void RMInput::Poll(void) {
	_leftClickMouse = _leftReleaseMouse = _rightClickMouse = _rightReleaseMouse = false;

	// Get pending events
	while (g_system->getEventManager()->pollEvent(_event)) {
		switch (_event.type) {
		case Common::EVENT_MOUSEMOVE:
		case Common::EVENT_LBUTTONDOWN:
		case Common::EVENT_LBUTTONUP:
		case Common::EVENT_RBUTTONDOWN:
		case Common::EVENT_RBUTTONUP:
			_mousePos.Set(_event.mouse.x, _event.mouse.y);

			if (_event.type == Common::EVENT_LBUTTONDOWN) {
				_leftButton = true;
				_leftClickMouse = true;
			} else if (_event.type == Common::EVENT_LBUTTONUP) {
				_leftButton = false;
				_leftReleaseMouse = true;
			} else if (_event.type == Common::EVENT_RBUTTONDOWN) {
				_rightButton = true;
				_rightClickMouse = true;
			} else if (_event.type == Common::EVENT_RBUTTONUP) {
				_rightButton = false;
				_rightReleaseMouse = true;
			} else
				continue;

			// Since a mouse button has changed, don't do any further event processing this frame
			return;

		case Common::EVENT_KEYDOWN:
			_keyDown[(int)_event.kbd.keycode] = true;
			return;

		case Common::EVENT_KEYUP:
			_keyDown[(int)_event.kbd.keycode] = false;
			return;

		default:
			break;
		}
	}			
}

void RMInput::Init() {
}

void RMInput::Close(void) {
}

bool RMInput::MouseLeft() {
	return _leftButton;
}

bool RMInput::MouseRight() {
	return _rightButton;
}

/**
 * Return true if a key has been pressed 
 */
bool RMInput::GetAsyncKeyState(Common::KeyCode kc) { 
	// The act of testing for a particular key automatically clears the state, to prevent
	// the same key being registered in multiple different frames
	bool result = _keyDown[(int)kc]; 
	_keyDown[(int)kc] = false;
	return result;
}

} // End of namespace Tony
