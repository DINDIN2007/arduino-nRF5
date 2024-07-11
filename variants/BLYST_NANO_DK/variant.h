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

#ifndef _VARIANT_NRF52_DK_
#define _VARIANT_NRF52_DK_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (31u)
#define NUM_DIGITAL_PINS     (24u)
#define NUM_ANALOG_INPUTS    (7u)
#define NUM_ANALOG_OUTPUTS   (0u)

/*
 * Analog pins
 */
#define PIN_A0     (0)	// AIN1	(P0.03)
#define PIN_A1     (1u)	// AIN2	(P0.04)
#define PIN_A2     (2u)	// AIN3	(P0.05)
#define PIN_A3     (3u)	// AIN4	(P0.28)
#define PIN_A4     (4u)	// AIN5	(P0.29)
#define PIN_A5     (5u)	// AIN7	(P0.31)

static const uint8_t A0  = PIN_A0 ; // AIN1
static const uint8_t A1  = PIN_A1 ; // AIN2
static const uint8_t A2  = PIN_A2 ; // AIN4
static const uint8_t A3  = PIN_A3 ; // AIN5
static const uint8_t A4  = PIN_A4 ; // AIN6
static const uint8_t A5  = PIN_A5 ; // AIN7
#define ADC_RESOLUTION    14


// Buttons
#define PIN_BUTTON1		(6u)
#define PIN_BUTTON2   (7u)

#define PIN_S1		PIN_BUTTON1
#define PIN_S2		PIN_BUTTON2


// LEDs
#define PIN_LED1    (8u)
#define PIN_LED2    (9u)
#define PIN_LED3    (10u)
#define PIN_LED4    (11u)

#define LED1		  PIN_LED1
#define LED2_R		PIN_LED2
#define LED2_G		PIN_LED3
#define LED2_B		PIN_LED4


/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_TX     (12u)
#define PIN_SERIAL_RX     (13u)
#define PIN_SERIAL_CTS		(14u)
#define PIN_SERIAL_RTS		(15u)


/*
 * Two Wire (I2C) Interfaces 
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (18u)
#define PIN_WIRE_SCL         (19u)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;


/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_SS			(26u)
#define PIN_SPI_SCK     (27u)
#define PIN_SPI_MISO    (28u)
#define PIN_SPI_MOSI    (29u)

static const uint8_t SS   = PIN_SPI_SS; // was cs before ??
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;


// NFC antenna pins
#define PIN_NFC1	(16u)
#define PIN_NFC2	(17u)


/*
 * Reset Button at P0.21
 */
#define RESET_PIN        (31u)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
