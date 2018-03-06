/******************************************************************************
*
* File name: dna.c
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

 int main(){
   FILE* inFile = NULL;
   FILE* outFile = NULL;
   int i;
   double match1num = 0;
   double match2num = 0;
   double match3num = 0;
   double percent1;
   double percent2;
   double percent3;

   char dna1[241];
   char dna2[241];
   char dna3[241];
   char match1and2[241];
   char match1and3[241];
   char match2and3[241];

   inFile = fopen("dna_input.dat", "r");
   outFile = fopen("dna_output.dat", "w");

   fscanf(inFile,"%s", &dna1);
   fscanf(inFile,"%s", &dna2);
   fscanf(inFile,"%s", &dna3);

   for(i=0;i<94;i++){
	   //match1and2
   	   if(dna1[i]==dna2[i]){
   		  match1and2[i] = dna1[i];
   		  match1num++;
   	   }
   	   if(dna1[i]!=dna2[i]){
   		  match1and2[i] = ' ';
   	   }
   	   //match1and3
   	   if(dna1[i]==dna3[i]){
   		  match1and3[i] = dna1[i];
   		  match2num++;
   	   }
   	   if(dna1[i]!=dna3[i]){
   		  match1and3[i] = ' ';
   	   }
       //match2and3
       if(dna2[i]==dna3[i]){
   	   		  match2and3[i] = dna2[i];
   	   		  match3num++;
   	   	   }
   	   if(dna2[i]!=dna3[i]){
   	   		  match2and3[i] = ' ';
   	   	   }
      }

   percent1 = 100*match1num/94;
   percent2 = 100*match2num/94;
   percent3 = 100*match3num/94;

   fprintf(outFile,"Comparison between sequence #1 and sequence #2:\n");
   for(i=0;i<60;i++){
	   fprintf(outFile,"%c",dna1[i]);
   }
   fprintf(outFile,"\n");
   for(i=0;i<60;i++){
	   fprintf(outFile,"%c",match1and2[i]);
   }
   fprintf(outFile,"\n");
   for(i=0;i<60;i++){
	   fprintf(outFile,"%c",dna2[i]);
   }
   fprintf(outFile,"\n");
   fprintf(outFile,"\n");

   for(i=60;i<94;i++){
  	   fprintf(outFile,"%c",dna1[i]);
   }
   fprintf(outFile,"\n");
   for(i=60;i<94;i++){
  	   fprintf(outFile,"%c",match1and2[i]);
   }
   fprintf(outFile,"\n");
   for(i=60;i<94;i++){
  	   fprintf(outFile,"%c",dna2[i]);
   }
   fprintf(outFile,"\n");
   fprintf(outFile,"\n");
   fprintf(outFile,"The overlap percentage is %.1lf%%",percent1);
   fprintf(outFile,"\n");
   fprintf(outFile,"\n");
//second
   fprintf(outFile,"Comparison between sequence #1 and sequence #3:\n");
        for(i=0;i<60;i++){
     	   fprintf(outFile,"%c",dna1[i]);
        }
        fprintf(outFile,"\n");
        for(i=0;i<60;i++){
     	   fprintf(outFile,"%c",match1and3[i]);
        }
        fprintf(outFile,"\n");
        for(i=0;i<60;i++){
     	   fprintf(outFile,"%c",dna3[i]);
        }
        fprintf(outFile,"\n");
        fprintf(outFile,"\n");

        for(i=60;i<94;i++){
       	   fprintf(outFile,"%c",dna1[i]);
        }
        fprintf(outFile,"\n");
        for(i=60;i<94;i++){
       	   fprintf(outFile,"%c",match1and3[i]);
        }
        fprintf(outFile,"\n");
        for(i=60;i<94;i++){
       	   fprintf(outFile,"%c",dna3[i]);
        }
        fprintf(outFile,"\n");
        fprintf(outFile,"\n");
        fprintf(outFile,"The overlap percentage is %.1lf%%",percent2);
        fprintf(outFile,"\n");
        fprintf(outFile,"\n");
//third
        fprintf(outFile,"Comparison between sequence #2 and sequence #3:\n");
               for(i=0;i<60;i++){
            	   fprintf(outFile,"%c",dna2[i]);
               }
               fprintf(outFile,"\n");
               for(i=0;i<60;i++){
            	   fprintf(outFile,"%c",match2and3[i]);
               }
               fprintf(outFile,"\n");
               for(i=0;i<60;i++){
            	   fprintf(outFile,"%c",dna3[i]);
               }
               fprintf(outFile,"\n");
               fprintf(outFile,"\n");

               for(i=60;i<94;i++){
              	   fprintf(outFile,"%c",dna2[i]);
               }
               fprintf(outFile,"\n");
               for(i=60;i<94;i++){
              	   fprintf(outFile,"%c",match2and3[i]);
               }
               fprintf(outFile,"\n");
               for(i=60;i<94;i++){
              	   fprintf(outFile,"%c",dna3[i]);
               }
               fprintf(outFile,"\n");
               fprintf(outFile,"\n");
               fprintf(outFile,"The overlap percentage is %.1lf%%",percent3);
               fprintf(outFile,"\n");
               fprintf(outFile,"\n");



   fclose(inFile);
   fclose(outFile);

 return 0;
 }
