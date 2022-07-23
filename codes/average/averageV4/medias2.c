#include <utility.h>
#include <ansi_c.h>
//==============================================================================
//
// Title:		medias2.c
// Purpose:		A short description of the implementation.
//
// Created on:	03/12/2020 at 21:32:44 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

int main ()

{
	  int x=1,soma=0; 
	  float media,n;
	  char letra;
	  letra= 's';
	   
	  while (letra=='s')
	  {
		  
	  do{
		  Cls();
		  printf("================================================\n");
		  printf("   <---- ARITHMETIC AVERAGE CALCULATOR ---->\n");
		  printf("================================================\n\n");
		  printf("DESCRIPTION: THIS PROGRAM CALCULATES THE AVERAGE\n\t\tOF THE FIRST N TERMS\n");
		  printf("\nTYPE A NUMBER:\t");
		  scanf("%f",&n);
		  getchar();
	    }while(n<=0);
	  
	  while(x<=n) {
			soma += x++;
	  } 
	  media = soma / n;
	  printf("THE AVERAGE IS:\t%f\n\n",media);
	  
	      printf("=============================================\n");
		  printf("      DO YOU WANT TO REPEAT THE PROCESS?\n");
		  printf("=============================================\n"); 
		  printf("\nIF YES, TYPE [s]\n\nIF NOT, TYPE ANOTHER KEY\n");
		  scanf("%c", &letra);
		  Cls();
	  }
	 
	 return 0;
}	  
		  
		  
		  

