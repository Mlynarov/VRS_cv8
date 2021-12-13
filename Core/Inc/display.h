/*
 * Display.h
 *
 *  Created on: 13. 12. 2021
 *      Author: Author: Molnar & Nyiri
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include "main.h"
#include <stdio.h>
#include <string.h>

#define DIGIT_1_ON		LL_GPIO_SetOutputPin(GPIOA, digit1_Pin)
#define DIGIT_2_ON		LL_GPIO_SetOutputPin(GPIOA, digit2_Pin)
#define DIGIT_3_ON		LL_GPIO_SetOutputPin(GPIOA, digit3_Pin)
#define DIGIT_4_ON		LL_GPIO_SetOutputPin(GPIOA, digit4_Pin)
#define DIGIT_TIME_ON	LL_GPIO_SetOutputPin(GPIOA, digitTime_Pin)

void setAllSegments(void);
void resetAllSegments(void);
void resetAllDigits(void);


#endif /* DISPLAY_H_ */