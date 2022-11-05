/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: WinZ
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#define normal_state 1
#define pressed_state 0

int checkbuttonreset();
int checkbuttoninc();
int checkbuttondec();

void getresetinput();
void getincinput();
void getdecinput();


#endif /* INC_BUTTON_H_ */
