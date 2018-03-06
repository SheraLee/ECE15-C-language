/******************************************************************************
*
* File name: cos_approx.c
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

/*=============================================================================
  Constants and definitions:
=============================================================================*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function (describe what your program does here):computes the
  approximate value of cos(x) according to its Taylor series expansion
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

 int factorial(int n){
   int factorial_result = 1;
   int i;
   if(n == 0){
        return factorial_result;
      }
   else{
	   for(i=1; i<=n; ++i){
		   factorial_result *= i;
       }
	   return factorial_result;
   }
 }

 double power(double x, int n){
   double power_result = 1;
   int i;
   if(n == 0){
     return power_result;
   }
   else{
	   for(i=1; i<=n; i++){
		   power_result *= x;
	   }
	   return power_result;
   }
 }

 double cos_N(double x, int N){
   int i;
   double cons_result = 0;
   int lower;
   double upperOne,upperTwo;
   for(i = 0; i < N; i++){
	 upperOne = power(-1,i);
	 upperTwo = power(x,2*i);
	 lower = factorial(2*i);
     cons_result += (upperOne*upperTwo)/lower;
   }
   return cons_result;
 }

 double cos_delta(double x, double delta){
   double diff,firstTerm,secondTerm;
   int n = 1;
   do{
	  firstTerm = cos_N(x,n);
	  secondTerm = cos_N(x,n-1);
	  diff = firstTerm - secondTerm;
	  if(diff<0){
		  diff = 0 - diff;
	  }
	  n++;
   }
   while (diff > delta);
   return firstTerm;
 }

 int main(){
   FILE* inFile = NULL;
   FILE* outFile = NULL;
   int timesToTest,timesAlrTest,type,N;
   double x,delta,toReturn;

   inFile = fopen("cos_input.dat", "r");
   outFile = fopen("cos_output.dat", "w");
   fscanf(inFile, "%d",&timesToTest);

   for(timesAlrTest=1;timesAlrTest<=timesToTest;timesAlrTest++){
     fscanf(inFile, "%d",&type);
     if(type == 1){
    	 fscanf(inFile,"%lf",&x);
    	 fscanf(inFile,"%d",&N);
    	 toReturn = cos_N(x,N);
    	// printf("case %d: cos(%.3lf) = %.12lf\n",timesAlrTest,x,toReturn);
    	 fprintf(outFile,"Case %d: cos(%.3lf) = %.12lf\n",timesAlrTest,x,toReturn);
     }
     if(type == 2){
         fscanf(inFile,"%lf",&x);
         fscanf(inFile,"%lf",&delta);
         toReturn = cos_delta(x,delta);
    //     printf("case %d: cos(%.3lf) = %.12lf\n",timesAlrTest,x,toReturn);
         fprintf(outFile,"Case %d: cos(%.3lf) = %.12lf\n",timesAlrTest,x,toReturn);
     }
    }

   fclose(inFile);
   fclose(outFile);

 return 0;
 }
