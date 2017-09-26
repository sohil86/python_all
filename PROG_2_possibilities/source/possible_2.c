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
 * @file   possible_2.C 
 * This file contains the implementation for ALL POSSIBLE COMBINATIONS OF A STRING.
 * @author eInfochips
 * @Date   29-August-2017
 */

//=========================== INCLUDE FILES ===================================

#include "header.h"

//=========================== DEFINES =========================================

#define MAX_LENGTH 10

//=========================== GLOBAL VARIABLES ================================

int j = 0; // for line numbers

//======================== FUNCTION DEFINITIONS ===============================

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
void swap(char *x, char *y)
{
    char temp = ' ';
    temp = *x;
    *x = *y;
    *y = temp;
}

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
void perm(char *ch, int ul, int ll)
{
    int i = 0;

    if (ul == ll)
    {
		printf("%d\t",++j);
		printf("%s\n", ch);
    }   
    else
    {
        for (i = ul; i <= ll; i++)
        {
	    	swap((ch+ul), (ch+i));
	    	perm(ch, ul+1,ll);
	    	swap((ch+ul), (ch+i));
        }
    }
}

/*!
 * This function is main entry point of software.
 *
 * @param[in]   none
 *
 * @param[out]  none
 *
 * @return      default value
 *
 * @author      eInfochips
 *
 * @version     version : 1
 *
 * @Date        29-August-2017
 */
int main(int argc, char *argv[])
{
    char str1[MAX_LENGTH] = {0};
    unsigned int len = 0;
	if(NULL != argv[1])
	{			
		strcpy(str1,argv[1]);
		len = strlen(str1);
		if(11 > len)
		{
			printf("All possible outputs are:- \n");
			perm(str1, 0, len-1);
		}
		else
		{
			printf("\n\nYou have entered a longer string then expected.\n\n");
		}
	}	
	else 
	{
		printf("\nEnter the string value with the execution file.");
		printf("\nFor Eg.:- \n\t./possible_2 ABC\n");
	}
	return(0);
}

