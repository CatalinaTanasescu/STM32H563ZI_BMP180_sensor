/*
 * BMP180.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Marmelada
 */

#ifndef INC_BMP180_H_
#define INC_BMP180_H_



#include "stm32h5xx_hal.h"

void BMP180_Start(void);

float BMP180_GetTemp(void);

float BMP180_GetPress(int oss);

float BMP180_GetAlt(int oss);

#endif /* INC_BMP180_H_ */
