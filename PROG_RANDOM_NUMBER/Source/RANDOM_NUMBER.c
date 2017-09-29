/******************************************************************************
 * Copyright 2017 eInfochips - All rights reserved.
 *
 * This software is authored by eInfochips and is eInfochips' intellectual
 * property, including the copyrights in all countries in the world.
 * This software is provided under a license to use only with all other rights,
 * including ownership rights, being retained by eInfochips. 
 *
 * This file may not be distributed, copied, or reproduced in any manner,
 * electronic or otherwise, without the written consent of eInfochips. 
 *****************************************************************************/

/*!
 * @file   RANDOM_NUMBER.c 
 * This file contains the program to generate and return random numbers.
 * @author eInfochips
 * @Date   28-September-2017
 */

//=========================== INCLUDE FILES ================================

#include "HEADER.h"

//======================== FUNCTION DEFINITIONS =============================
/*!
 * This function is main entry point of software.
 *
 * @param[in]   none
 *
 * @param[out]  int usiR : Random number generated
 *
 * @return      int usiR : Random number generated
 *
 * @author      eInfochips
 *
 * @version     version : 1
 *
 * @Date        28-September-2017
 */
int main()
{
	unsigned short int usiR;
	srand(time(NULL));	//required for "randomness"
	usiR=rand()%10000;
	sleep(1);			//sleep for 1 second
	return (usiR);
}
