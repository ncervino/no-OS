/***************************************************************************//**
 *   @file   Command.h
 *   @brief  Header file of the commands driver.
 *   @author DNechita (Dan.Nechita@analog.com)
********************************************************************************
 * Copyright 2013(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*******************************************************************************/
#ifndef __COMMAND_H__
#define __COMMAND_H__

/******************************************************************************/
/********************** Macros and Constants Definitions **********************/
/******************************************************************************/
#define NULL        ((void *)0)
#define SUCCESS      0
#define ERROR       -1

/******************************************************************************/
/*************************** Types Declarations *******************************/
/******************************************************************************/
typedef void (*cmdFunction)(double* param, char paramNo);

/******************************************************************************/
/************************ Functions Declarations ******************************/
/******************************************************************************/

/*!< Initializes the device. */
char DoDeviceInit(void);

/*!< Displays all available commands. */
void GetHelp(double* param, char paramNo);

/*!< Displays device details. */
void GetId(double* param, char paramNo);

/*!< Turn on/off the measurement process of the device. */
void SetMeasurement(double* param, char paramNo);

/*!< Displays the temperature. */
void GetTemperature(double* param, char paramNo);

/*!< Resets the device. */
void DoReset(double* param, char paramNo);

/*!< Displays the acceleration on all 3 axes. */
void GetAcceleration(double* param, char paramNo);

/*!< Displays the acceleration on X axis. */
void GetAccelerationX(double* param, char paramNo);

/*!< Displays the acceleration on Y axis. */
void GetAccelerationY(double* param, char paramNo);

/*!< Displays the acceleration on Z axis. */
void GetAccelerationZ(double* param, char paramNo);

/*!< Displays the activity status of the device. */
void GetActivity(double* param, char paramNo);

#endif  // __COMMAND_H__
