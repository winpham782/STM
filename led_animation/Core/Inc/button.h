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

int mode();
int inc();
int set();

void getresetinput();
void getincinput();
void getdecinput();


#endif /* INC_BUTTON_H_ */
