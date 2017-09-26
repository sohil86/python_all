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
 * @file   header.h
 * This file contains the definitions for finding all possible permutations of 
 * a string.
 * @author eInfochips
 * @Date   29-August-2017
 */

#ifndef HEADER_H_
#define HEADER_H_

//=========================== INCLUDE FILES ================================

#include <stdio.h>      // standard buffered input/output
#include <string.h>     // string operations
#include <stdlib.h>     // for memory allocation functions 


//======================== FUNCTION PROTOTYPES ================================


/*!
 * This function is used to swap two characters.
 *
 * @param[in]   two character pointers
 *
 * @param[out]  none
 *
 * @return      none
 *
 * @author      eInfochips
 *
 * @version     version : 1
 *
 * @Date        28-August-2017
 */
void swap(char *x, char *y);

/*!
 * This function is used to permute all possible combinations of the string.
 *
 * @param[in]   char *ch : character string 
 *              int ul   : upper limit to be checked
 *              int ll   : lower limit to be checked
 *
 * @param[out]  none
 *
 * @return      none
 *
 * @author      eInfochips
 *
 * @version     version : 1
 *
 * @Date        29-August-2017
 */
void perm(char *ch, int ul, int ll);


#endif /* HEADER_H_ */
