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
 * @file   swap_1.c
 * This file contains the implementation for swapping of two variables.
 * @author eInfochips
 * @Date   29-August-2017
 */

//=========================== INCLUDE FILES ================================

#include "header.h"


//======================== FUNCTION DEFINITIONS ===============================
/*!
 * This function is used to swap any data.
 *
 * @param[in]   char a[]: charater array of first string
 *              char b[]: character array of second string
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
#define swap(a,b) {a = a + b; b = a - b; a = a - b;}


/*!
 * This function is main entry point of software.
 *
 * @param[in]   none
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
int main(int argc, char * argv[])
{
	unsigned int len=0;
	unsigned int i=0;
	unsigned int j=0;
	char x[1024] = {0};
	char y[1024] = {0};
	if (3 == argc)
	{
		strcpy(x,argv[1]);
		strcpy(y,argv[2]);
		i=strlen(x);
		j=strlen(y);

		len=(i>j?i:j);

		for(i=0;i<len;i++)
		{ 
			swap(x[i],y[i]);
		}

		printf("\nThe first value:- %s ", x);
		printf("\nThe second value:- %s \n", y);
	}
	else 
	{
		printf("Usage : ./swap_1 <string1><space><string2>\n\n");
	}
return(0);
}
