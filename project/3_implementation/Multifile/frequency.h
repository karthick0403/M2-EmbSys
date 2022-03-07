/**
 * @file frequency.h
 * 
 */

#ifndef __FREQUENCY_H_
#define __FREQUENCY_H_

#ifndef __AVR_ATmega328_
#define __AVR_ATmega328_
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<stdlib.h>

#define s0 4
#define s1 5
#define s2 6
#define s3 7
#define sensorOut 8
int red = 0;
int green = 0;
int blue = 0;
void setup();
void loop();
#endif

