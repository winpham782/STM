/*
 * timer.h
 *
 *  Created on: Nov 2, 2022
 *      Author: WinZ
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void settimer1(int n);
void settimer2(int n);
void settimer3(int n);
void timerrun();

#endif /* INC_TIMER_H_ */
