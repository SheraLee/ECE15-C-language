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
 #define BASE 3
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
   int num, status, exponent,a,currNum,b;
   printf("Enter a positive integer: ");
   status = scanf("%d", &num);
   if (num <= 0 || status != 1){
       printf("Error: invalid integer entered!\n");
       return 1;
      }

   if (num == 1){
       printf("1 is a power of %d, exponent = 0\n", BASE);
       return 0;
      }

   if (num < BASE){
         printf("%d is not a power of %d!\n",num,BASE);
         return 0;
      }

   exponent = 1;
   currNum = num;
   while (currNum != BASE){
	 b = currNum % BASE;
	 if(b != 0){
	     printf("%d is not a power of %d!\n",num,BASE);
	     return 0;
	 }
	 else{
		 currNum = currNum / BASE;
		 exponent++;
	 }

   }
   printf("%d is a power of %d, exponent = %d\n",num, BASE,exponent);
   return 0;
}
