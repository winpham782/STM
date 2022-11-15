/*
 * global.h
 *
 *  Created on: Nov 2, 2022
 *      Author: WinZ
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "timer.h"
#include "button.h"
#include "fsm_automatic.h"
#include "display7seg.h"

#define INIT			1
#define normal			2
#define modify_red		3
#define modify_yellow	4
#define modify_green	5

extern int status;
extern int counter;
extern int counterred;
extern int counteryellow;
extern int countergreen;



#endif /* INC_GLOBAL_H_ */
