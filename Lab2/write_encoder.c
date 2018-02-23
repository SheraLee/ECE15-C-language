/******************************************************************************
*
* File name: write_encoder.c
*
* Author:  Xirui Li
*          A13691309
*          xil475@ucsd.edu
*
*
*     Lab #:02
* Problem #:4
*
* Submission Date: 14 Feb 2018
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
	int length = 0;
	//printf( "Enter the desired word length:  \"");
	scanf("%d", &length);

	printf("#include <stdio.h>\n\n");
	printf("int main()\n");
	printf("{\n");

	printf("char key[6];\n");
	printf("char keyW;\n");
	printf("char toEncrypt[%d];\n",length+1);
	printf("char encryptedWord[%d];\n",length+1);
	printf("int j;\n");
	printf("int k;\n\n");


	printf("printf(\"Enter key:  \");\n");
	printf("k=0;\n");
	printf("while(k<5){\n");
	printf("scanf(\"%%c\",&keyW);\n");
	printf("key[k] = keyW;\n");
	printf("k++;\n");
	printf("}\n");
	printf("key[5]='\\0';\n\n");

	printf("printf(\"Enter word:  \");\n");
	printf("scanf(\"%%s\",toEncrypt);\n");

    printf("toEncrypt[%d]='\\0';\n",length);
    printf("for(j=0; j<%d;j++){\n",length);
    printf("  switch(toEncrypt[j]){\n");
    printf("     case 'a':\n");
    printf("          encryptedWord[j]=key[0];\n");
    printf("          break;\n");
    printf("     case 'b':\n");
    printf("          encryptedWord[j]=key[1];\n");
    printf("          break;\n");
    printf("     case 'c':\n");
    printf("          encryptedWord[j]=key[2];\n");
    printf("          break;\n");
    printf("     case 'd':\n");
    printf("          encryptedWord[j]=key[3];\n");
    printf("          break;\n");
    printf("     case 'r':\n");
    printf("          encryptedWord[j]=key[4];\n");
    printf("          break;\n");
    printf("     default:\n");
    printf("          printf(\"You did not speak in ABRACADABRA to me!\\n\");\n");
    printf("          return 0;\n");
	printf("   }\n");
	printf("}\n\n");

	printf("encryptedWord[%d] = '\\0';\n\n",length);
	printf("printf(\"Encrypted word:  %%s\\n\",encryptedWord);\n");

	printf("return 0;\n");
    printf("}");

}



