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
 * @file   file_4.C 
 * This file contains the program for counting characters, tabs, spaces and
 * new lines in a file 
 * @author eInfochips
 * @Date   31-August-2017
 */

//=========================== INCLUDE FILES ================================

#include "header.h"

//======================== FUNCTION DEFINITIONS =============================
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
 * @Date        31-August-2017
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	unsigned int chcount=0;
	unsigned int tabcount = 0;
	unsigned int nlcount = 0;
	unsigned int spcount = 0;
	unsigned int chscount = 0;
	unsigned int len = 0;
	if (NULL != argv[1] )
	{
		if(NULL != argv[1])
		{	
    		fp=fopen(argv[1],"r");
    		if(NULL == fp) 
			{
    			printf("File doesnot exist\n");
    		}
			else
			{	
				while(EOF != (ch=fgetc(fp))) 
				{
					chcount++;

					if (' ' != ch && '\t' != ch && '\n' != ch)
					{    			
						chscount++;
					}
					if ('\t' == ch)
					{
						tabcount++;
					}

					if ('\n' == ch)
					{
						nlcount++;
					}
					if (' ' == ch)
					{
						spcount++;
					}
				}
				fclose(fp);
			}
    		printf("\nNumber of characters present in file is:             ");
			printf("%d\n",chcount);
			printf("\nNumber of characters(w/o spaces) present in file is: ");
			printf("%d\n",chscount);
			printf("\nNumber of tab spaces present in file is:             ");
			printf("%d\n",tabcount);
			printf("\nNumber of new lines present in file is:              ");
			printf("%d\n",nlcount);
			printf("\nNumber of spaces present in file is:                 ");
			printf("%d\n",spcount);
    	}
	}
	else
	{
		printf("\nEnter the file name with the execution file.");
		printf("\nFor Eg.:- \n\t./file_4 file.c\n");
		printf("\n\t\t or else");
		printf("\n ./file_4 /home/devaj/assign/prog-4/source/file_4.c\n");
	}
	return(0);
}

