/******************************************************************************
*
* File name: prime_factorization.c
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:02
* Problem #:2
*
* Submission Date: 12 Feb 2018
*
******************************************************************************/


/*-----------------------------------------------------------------------------
   Include files:
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*=============================================================================
  Constants and definitions:
=============================================================================*/
#define VARIABLE_NAME ‘Y’
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
	int num,i;

    while(1){
	    printf("Enter an integer:  ");
	    scanf("%d",&num);

	    if(num <= 1){
	    	return 1;
	    }

	    printf("The prime factorization of %d is ",num);

	    for(i = 2; i <= num; i++){
	        while (num%i == 0){
	            printf(" %d ", i);
	            num = num/i;
	        }
	    }
	    if (num > 2){
	        printf (" %d", num);
	    }
	    printf("\n");
	 }
     return 0;
}
