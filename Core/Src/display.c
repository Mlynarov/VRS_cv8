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

void setA(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	// reset D
	LL_GPIO_SetOutputPin(GPIOB, segmentD_Pin);

}
void seta(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	// reset f
	LL_GPIO_SetOutputPin(GPIOA, segmentF_Pin);

}
void setb(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	// reset a,b
	LL_GPIO_SetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentB_Pin);
}
void setC(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentF_Pin);
	// reset B,C,G
	LL_GPIO_SetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segmentG_Pin);
}
void setc(void){
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	//reset
	LL_GPIO_SetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentF_Pin);
}
void setd(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	//reset
	LL_GPIO_SetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentF_Pin);
}
void setE(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	//reset
	LL_GPIO_SetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentC_Pin);
}
void setF(void){
	LL_GPIO_ResetOutputPin(GPIOA, segmentA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segmentF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segmentG_Pin);
	//reset
	LL_GPIO_SetOutputPin(GPIOA, segmentB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segmentC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segmentD_Pin);
}

// Disgusting letters :D
void setK(void){

}
void setM(void){

}
void setV(void){

}
void setW(void){

}
void setX(void){

}
void setZ(void){

}


