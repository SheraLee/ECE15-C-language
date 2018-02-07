/******************************************************************************
*
* File name: template.c
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

/*=============================================================================
  Constants and definitions:
=============================================================================*/

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
	int a,b,c,status1,status2,status3;
	printf("Enter integers a, b, c: ");
	status1 = scanf("%d",&a);
	status2 = scanf("%d",&b);
	status3 = scanf("%d",&c);

	if(status1==1 && status2==1 && status3==1){
		printf("%d%d%d\n",a,b,c);

		if(!a || (!b++ && c)){
			printf("       !a || !b++ && c: True\n");
		}
		else{
			printf("       !a || !b++ && c: False\n");
		}

		if((a-1 || b/2) && (c*=2)){
			printf("(a-1 || b/2) && (c*=2): True\n");
		}
		else{
			printf("(a-1 || b/2) && (c*=2): False\n");
		}

		if((a-- || --b) && (c+=2)){
			printf("(a-- || --b) && (c+=2): True\n");
		}
		else{
			printf("(a-- || --b) && (c+=2): False\n");
		}

		if(a || !(b && --c)){
			printf("      a || !(b && --c): True\n");
		}
		else{
			printf("      a || !(b && --c): False\n");
		}

	}

	else{
		printf("invalid user input");
	}
	return 0;
}
