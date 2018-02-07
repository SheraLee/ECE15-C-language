/******************************************************************************
*
* File name: digit.c
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:01
* Problem #:1
*
* Submission Date: 25 Jan 2018
*
******************************************************************************/


/*-----------------------------------------------------------------------------
   Include files:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include<stdlib.h>

/*=============================================================================
  Constants and definitions:
=============================================================================*/

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
int main()
{
    int oriNum, status,num;
    int position = 1;
    printf("Enter integer: ");
    status = scanf("%d",&oriNum);

    if( status == 1){
       if(oriNum == 0){
    	 printf("Digit (1): 0\n");
    	 return 0;
    	 }
       num = (int) abs(oriNum);
       while(num != 0)
         {
             int digit = num % 10;
             printf("Digit (%d): %d\n", position,digit);
             position ++ ;
             num = num / 10;
         }

    }
    else( printf("invalid input"));
    return 0;
}
