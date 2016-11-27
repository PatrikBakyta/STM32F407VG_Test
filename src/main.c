/*
******************************************************************************
File:     main.c
Info:     Generated by Atollic TrueSTUDIO(R) 6.0.0   2016-11-27

The MIT License (MIT)
Copyright (c) 2009-2016 Atollic AB

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************
*/

/* Includes */
#include "stm32f4xx.h"

/* Private macro */
/* Private variables */
/* Private function prototypes */
/* Private functions */

/**
**===========================================================================
**
**  Abstract: main program
**
**===========================================================================
*/

void sleep(int val){
	for(uint32_t i=0;i<val;i++){
	}
}

int main(void)
{
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);

  GPIO_InitTypeDef initStruct;
  initStruct.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
  initStruct.GPIO_Mode = GPIO_Mode_OUT;
  initStruct.GPIO_OType = GPIO_OType_PP;
  initStruct.GPIO_PuPd = GPIO_PuPd_UP;
  initStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOD,&initStruct);

  /**
  *  IMPORTANT NOTE!
  *  The symbol VECT_TAB_SRAM needs to be defined when building the project
  *  if code has been located to RAM and interrupts are used. 
  *  Otherwise the interrupt table located in flash will be used.
  *  See also the <system_*.c> file and how the SystemInit() function updates 
  *  SCB->VTOR register.  
  *  E.g.  SCB->VTOR = 0x20000000;  
  */

  /* TODO - Add your application code here */

  /* Infinite loop */

  int val = 0;

  while (1)
  {
	  for(int i = 1; i<40; i++) {

		  val = 3000000/i;

		  GPIO_SetBits(GPIOD,GPIO_Pin_12);
		  sleep(val);
		  GPIO_ResetBits(GPIOD,GPIO_Pin_12);
		  sleep(val);

		  GPIO_SetBits(GPIOD,GPIO_Pin_13);
		  sleep(val);
		  GPIO_ResetBits(GPIOD,GPIO_Pin_13);
		  sleep(val);

		  GPIO_SetBits(GPIOD,GPIO_Pin_14);
		  sleep(val);
		  GPIO_ResetBits(GPIOD,GPIO_Pin_14);
		  sleep(val);

		  GPIO_SetBits(GPIOD,GPIO_Pin_15);
		  sleep(val);
		  GPIO_ResetBits(GPIOD,GPIO_Pin_15);
		  sleep(val);

	  }

	  for(int i = 39; i>0; i--) {

	  		  val = 3000000/i;

	  		  GPIO_SetBits(GPIOD,GPIO_Pin_12);
	  		  sleep(val);
	  		  GPIO_ResetBits(GPIOD,GPIO_Pin_12);
	  		  sleep(val);

	  		  GPIO_SetBits(GPIOD,GPIO_Pin_13);
	  		  sleep(val);
	  		  GPIO_ResetBits(GPIOD,GPIO_Pin_13);
	  		  sleep(val);

	  		  GPIO_SetBits(GPIOD,GPIO_Pin_14);
	  		  sleep(val);
	  		  GPIO_ResetBits(GPIOD,GPIO_Pin_14);
	  		  sleep(val);

	  		  GPIO_SetBits(GPIOD,GPIO_Pin_15);
	  		  sleep(val);
	  		  GPIO_ResetBits(GPIOD,GPIO_Pin_15);
	  		  sleep(val);

	  }
  }
}
