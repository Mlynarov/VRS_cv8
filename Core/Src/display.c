/*
 * display.c
 *
 *  Created on: 13. 12. 2021
 *      Author: Molnar & Nyiri
 */

#include "display.h"

void setAllSegments(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentDP_Pin);
}

void resetAllSegments(void){
	LL_GPIO_SetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segmentG_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segmentDP_Pin);
}

void resetAllDigits(void)
{
	LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_2);
	LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_5);
	LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_4);
	LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_6);
	LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_7);
}



