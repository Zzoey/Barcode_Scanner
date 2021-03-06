/*****************************************************************************
Copyright (C) 2011-12 Brigosha Technologies Private Limited
Disclaimer		: 
 Common:
 Brigosha Technologies products are developed for the consumer goods industry. They may only be used 
 within the parameters of the respective valid product data sheet.  Brigosha Technologies products are 
 provided with the express understanding that there is no warranty of fitness for a particular purpose. 
 They are not fit for use in life-sustaining, safety or security sensitive systems or any system or device 
 that may lead to bodily harm or property damage if the system or device malfunctions.


 Special:
 This software module (hereinafter called "Software") and any information on application-sheets 
 (hereinafter called "Information") is provided free of charge for the sole purpose to support your 
 application work. The Software and Information is subject to the following terms and conditions: 

 The Software is specifically designed for the exclusive use for Brigosha Technologies products by 
 personnel who have special experience and training. Do not use this Software if you do not have the 
 proper experience or training. 

 This Software package is provided `` as is `` and without any expressed or implied warranties, 
 including without limitation, the implied warranties of merchantability and fitness for a particular 
 purpose. 

 Brigosha Technologies  deny any liability for the functional impairment of this Software in terms of
 fitness, performance and safety. Brigosha Technologies shall not be liable for any direct or indirect
 damages or injury.
 
 The Information provided is believed to be accurate and reliable. Brigosha Technologies assumes no 
 responsibility for the consequences of use of such Information nor for any infringement of patents or 
 other rights of third parties which may result from its use. No license is granted by implication or 
 otherwise under any patent or patent rights of Brigosha Technologies. Specifications mentioned in the
 Information are subject to change without notice.

 It is not allowed to deliver the source code of the Software to any third party without permission of 
 Brigosha Technologies.

****************************************************************************************************/ 
/*
********************************************************************************
[File]          : ELB_OSC.h
[Version]       : v0.1
[Processor]     : PIC24FJ256GB206
[Compiler]      : MPLABC30
[Description]   : ELB oscillator configuration Macros and Functions
--------------------------------------------------------------------------------
[VERSION]	[DATE]   	[AUTHOR]                            CHANGES
 v0.1	   	10.10.2012 	shashi.prakash@brigosha.com         Origin
********************************************************************************
*/

#ifndef ELB_OSC_H
#define	ELB_OSC_H

/*** MICROCHIP LIBRARY ***/
#include <stdio.h>
#include <stdlib.h>
#include <p24FJ256GB206.h>
#include <libpic30.h>

/*** BRIGOSHA LIBRARY ***/
#include "Define.h"

/*** MACROS FOR SETTING FREQ ***/

#define PLL_32MHZ       0b00000000
#define PLL_16MHZ       0b00000001
#define PLL_8MHZ        0b00000010
#define PLL_4MHZ        0b00000011

#define FRCDIV_8MHZ     0b00001000
#define FRCDIV_4MHZ     0b00010000
#define FRCDIV_2MHZ     0b00100000
#define FRCDIV_1MHZ     0b00110000
#define FRCDIV_500KHZ   0b01000000
#define FRCDIV_250KHZ   0b01010000
#define FRCDIV_125KHZ   0b01100000
#define FRCDIV_31_25KHZ 0b01110000

/*** PUBLIC APIs ***/
void SET_FreqOsc(U8);
S32  GET_FreqOsc(void);

void DELAY_mSec(U16);


#endif	/* ELB_OSC_H */

