/******************************************************************************
*
* File name: linear_solver.c,
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:02
* Problem #:1
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
 double a,b,c,result;
 char y, plus,equal;
 printf("Enter a linear equation:");

 scanf("%lf", &a);
 if(a == 0){
	 printf("Invalid input!\n");
	 return 1;
 }

 scanf("%c", &y);
 if(y != 'Y') {
	 printf("Invalid input!\n");
	 return 1;
 }

 scanf("%c",&plus);
 while(plus==' '){
	 scanf("%c",&plus);
 }
 if(plus != '+'){
	 printf("Invalid input!\n");
	 return 1;
 }

 scanf("%lf",&b);

 scanf("%c",&equal);
 while(equal==' '){
	 scanf("%c",&equal);
 }
 if(equal != '='){
	 printf("Invalid input!\n");
	 return 1;
 }

 scanf("%lf", &c);

 result = (c-b)/a;
 printf("Y = %0.3f\n",result);
 return 0;
}
