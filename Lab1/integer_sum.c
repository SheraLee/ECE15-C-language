/******************************************************************************
*
* File name: power_of_three.c
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:01
* Problem #:3
*
* Submission Date: 25 Jan 2018
*
******************************************************************************/


/*-----------------------------------------------------------------------------
   Include files:
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*=============================================================================
  Constants and definitions:
=============================================================================*/
 #define BASE 3
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
 int number, sum, choice, total_numbers;
 printf("Welcome to the integer sum program!\n");
 choice = 0; total_numbers = 0; sum = 0; number = 0;
 while (choice != 3)
{
  printf("So far, you have entered %d numbers. You may:\n", total_numbers);
  printf("1. Enter a new integer\n");
  printf("2. Display the current sum\n");
  printf("3. Exit\n");

  printf("Please enter your choice: ");

  scanf("%d",&choice);
  switch(choice){
       case 1:
             printf("Enter the new integer: ");
             scanf("%d",&number);
             total_numbers++;
             sum += number;
             break;
       case 2:
    	     printf("The current sum is:%d\n",sum);

  }
}
return 0;
}
