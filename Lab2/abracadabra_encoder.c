/******************************************************************************
*
* File name: abracadabra encoder.c
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:02
* Problem #:3
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



int main(){
	char key[6];
	char keyW;
	char toEncrypt[8];
	char encryptedWord[8];
	int j;


	printf("     Enter key:  ");
	int k = 0;
    while(k<5){
      scanf("%c", &keyW);
      key[k] = keyW;
      k++;
    }
    key[5]='\0';

	printf("    Enter word:  ");

	scanf("%s", toEncrypt);
	toEncrypt[7]='\0';

	for(j=0; j<7;j++){
		switch(toEncrypt[j]){
			   case 'a':
				    encryptedWord[j]=key[0];
				    break;
			   case 'b':
				    encryptedWord[j]=key[1];
				    break;
			   case 'c':
				    encryptedWord[j]=key[2];
				    break;
			   case 'd':
				    encryptedWord[j]=key[3];
				    break;
			   case 'r':
				    encryptedWord[j]=key[4];
				    break;
			   default:
				   printf("You did not speak in ABRACADABRA to me!\n");
				   return 0;
		}
	}
	encryptedWord[7] = '\0';
	printf("Encrypted word:  %s\n",encryptedWord);
    return 0;
}


