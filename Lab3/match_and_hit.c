/******************************************************************************
*
* File name: match_and_hit.c
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:03
* Problem #:1
*
* Submission Date: 29 Feb 2018
*
******************************************************************************/


/*-----------------------------------------------------------------------------
   Include files:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/*=============================================================================
  Constants and definitions:
=============================================================================*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):computes the
  approximate value of cos(x) according to its Taylor series expansion
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
 int isvalid(int n){
	 if(n<0){
		 return 0;
	 }
	 if(n/1000==0 || n/1000>9){
		 return 0;
	 }
	 int position1,position10,position100,position1000;
	 int value = n;
	 position1 = value%10;
	 value = value/10;
	 position10 = value%10;
	 value = value/10;
	 position100 = value%10;
	 value = value/10;
	 position1000 = value%10;
	 if(position1!=position10 && position1!=position100 && position1!=position1000 && position10!=position100 && position10!=position1000 && position100!=position1000){
		 return 1;
	 }
	 return 0;
 }

 int choose_N(void){
	 int number;
	 do{
		 number =  rand();
	 }
	 while(!isvalid(number));
	 return number;
 }

int matches(int N, int M){
	int positionN1,positionN10,positionN100,positionN1000;
	int Nvalue = N;
	int positionM1,positionM10,positionM100,positionM1000;
	int Mvalue = M;
	int numMatch = 0;
		 positionN1 = Nvalue%10;
		 Nvalue = Nvalue/10;
		 positionN10 = Nvalue%10;
		 Nvalue = Nvalue/10;
		 positionN100 = Nvalue%10;
		 Nvalue = Nvalue/10;
		 positionN1000 = Nvalue%10;

		 positionM1 = Mvalue%10;
		 Mvalue = Mvalue/10;
		 positionM10 = Mvalue%10;
		 Mvalue = Mvalue/10;
		 positionM100 = Mvalue%10;
		 Mvalue = Mvalue/10;
		 positionM1000 = Mvalue%10;

		 if(positionN1==positionM1) numMatch++;
		 if(positionN10==positionM10) numMatch++;
		 if(positionN100==positionM100) numMatch++;
		 if(positionN1000==positionM1000) numMatch++;
		 return numMatch;
  }

 int hits(int N, int M){
		int positionN1,positionN10,positionN100,positionN1000;
		int Nvalue = N;
		int positionM1,positionM10,positionM100,positionM1000;
		int Mvalue = M;
		int numHit= 0;
			 positionN1 = Nvalue%10;
			 Nvalue = Nvalue/10;
			 positionN10 = Nvalue%10;
			 Nvalue = Nvalue/10;
			 positionN100 = Nvalue%10;
			 Nvalue = Nvalue/10;
			 positionN1000 = Nvalue%10;

			 positionM1 = Mvalue%10;
			 Mvalue = Mvalue/10;
			 positionM10 = Mvalue%10;
			 Mvalue = Mvalue/10;
			 positionM100 = Mvalue%10;
			 Mvalue = Mvalue/10;
			 positionM1000 = Mvalue%10;

			 if((positionN1 != positionM1) &&( positionN1 == positionM10||positionN1 == positionM100|| positionN1 == positionM1000)) numHit++;
			 if((positionN10 != positionM10) && (positionN10 == positionM1||positionN10 == positionM100|| positionN10 == positionM1000)) numHit++;
			 if((positionN1000 != positionM1000) && (positionN1000 == positionM1 || positionN1000 == positionM10||positionN1000 == positionM100)) numHit++;
			 return numHit;
 }

 int main(){
 int numTry=1;
 int computer,userInput,inputValid;
 printf(" ***Welcome to the MATCH and HIT game*** \n");
 computer = choose_N();
 printf("%d\n",computer);

 printf("The computer has selected a 4-digit number.\n");
 printf("Try to deduce it in 12 rounds of queries.\n");
 while(numTry <= 12){
	 printf("\n");
	 printf("Round #%d\n",numTry);
	 do {
		 printf("Please enter your query (4 digits):");
		 inputValid = scanf("%d",&userInput);
	     if( !inputValid||!isvalid(userInput)) printf("Invalid number. Please try again!\n");
	    }
	 while(!inputValid||!isvalid(userInput));
	 if(matches(computer,userInput)>1 && hits(computer,userInput)>1)
	 printf("-> %d matches and %d hits\n",matches(computer,userInput),hits(computer,userInput));
	 if(matches(computer,userInput)<2 && hits(computer,userInput)>1)
	 printf("-> %d match and %d hits\n",matches(computer,userInput),hits(computer,userInput));
	 if(matches(computer,userInput)<2 && hits(computer,userInput)<2)
	 printf("-> %d match and %d hit\n",matches(computer,userInput),hits(computer,userInput));
	 if(matches(computer,userInput)>1 && hits(computer,userInput)<2)
	 printf("-> %d matches and %d hit\n",matches(computer,userInput),hits(computer,userInput));
	 numTry++;
	 if(matches(computer,userInput)==4){
		 printf("**********************************\n");
		 printf("CONGRATULATIONS! You won the game!\n");
		 printf("**********************************\n");
		 return 0;
	 }
 }
 printf("**********************************\n");
 printf("Sorry, out of queries. Game over!\n");
 printf("**********************************\n");
 return 0;
 }
