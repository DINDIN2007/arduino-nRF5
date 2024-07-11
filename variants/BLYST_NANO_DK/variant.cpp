/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
	// ANALOG
	3, 	// AIN1
	4, 	// AIN2
	5, 	// AIN3
	28, // AIN4
	29, // AIN5
	31, // AIN7
	
	// DIGITAL (D0 - D1)
	2,	// S1		//6
	13,	// S2		//7
	
	// DIGITAL (D2 - D5)
	30, // LED1			//8
	28,	// LED2_Red		//9
	29,	// LED2_Green	//10
	27,	// LED2_ Blue	/11
	
	// DIGITAL (D6 - D9)
	7,	// UART TX		//12
	8,	// UART RX		//13
	11,	// UART CTS		//14
	12,	// UART RTS		//15
	
	// DIGITAL (D10 - D11))
	9,	// NFC1			//16
	10,	// NFC2			//17
	
	// DIGITAL (D12 - D13)
	14,	// I2C SDA		//18
	15,	// I2C SCL		//19
	
	// DIGITAL (D14 - D19)
	16,	// GPIO			//20
	17,	// GPIO			//21
	18,	// GPIO			//22
	19,	// GPIO			//23
	20,	// GPIO			//24
	22,	// GPIO			//25
	
	// DIGITAL (D20 - D23)
	23,	// SPI CS/SS	//26
	24,	// SPI SCK		//27
	25, // SPI MISO		//28
	26,	// SPI MOSI		//29
	
	// DIGITAL (D23)
	27,	// GPIO			//30
	
	// RESET
	21,					//31
};
