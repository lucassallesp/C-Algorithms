#include <utility.h>
#include <ansi_c.h>
#include <stdlib.h>
//==============================================================================
//
// Title:		media3.c
// Purpose:		A short description of the implementation.
//
// Created on:	10/12/2020 at 18:47:07 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

int main()
{
	float valor1=0,valor2=0,valor3=0,valor4=0,media;
	char letra;
	letra='s';
	
while(letra=='s')
	{	
		do{
		Cls();
		printf("====================================================\n");
		printf("      <------- AVERAGE CALCULATOR 3.0 ------->\n");
		printf("====================================================\n\n");
	
		printf("Description :\n\nThis program calculates your average. Type your four \nnotes, between 0 and 10, the program will plus the \nnotes and divide by four then show you the arithmetic \naverage and if you are approved or disapproved.\n");

		printf("\n-----------------------------------------------------");
		printf("\nTYPE YOUR FIRST NOTE :|\t\t\t\t");
		scanf("%f", &valor1);
		getchar();
		}while((valor1<0) || (valor1>10));
	
		do{ 
		printf("-----------------------------------------------------\n");
		printf("TYPE YOUR SECOND NOTE:|\t\t\t\t");
		scanf("%f", &valor2);
		getchar();
		}while((valor2<0) || (valor2>10));
	
		do{
		printf("-----------------------------------------------------\n");
		printf("TYPE YOUR THIRD NOTE :|\t\t\t\t");
		scanf("%f", &valor3);
		getchar();
		}while((valor3<0) || (valor3>10));
	
		do{
		printf("-----------------------------------------------------\n");
		printf("TYPE YOUR FOURTH NOTE:|\t\t\t\t");
		scanf("%f", &valor4);
		getchar();
		}while((valor4<0) || (valor4>10));
		printf("-----------------------------------------------------\n");
	
		media= (valor1+valor2+valor3+valor4) / 4;
		printf("YOUR AVERAGE IS      :|\t\t\t\t%f\n", media);
		printf("-----------------------------------------------------\n\n");
	
	
		if(media<6) printf("        <--- SORRY, YOU ARE DISAPPROVED! --->\n\n ");
		else printf("    <--- CONGRATULATION!!! YOU ARE APPROVED --->\n\n");
	
		if(valor1>=valor2 && valor1>=valor3 && valor1>=valor4)  printf("\t        |YOUR HIGHER NOTE|: %f", valor1);
		else if(valor2>=valor1 && valor2>=valor3 && valor2>=valor4)  printf("\t        |YOUR HIGHER NOTE|: %f", valor2);
		else if(valor3>=valor1 && valor3>=valor2 && valor3>=valor4)  printf("\t        |YOUR HIGHER NOTE|: %f", valor3);
		else if(valor4>=valor1 && valor4>=valor2 && valor4>=valor3)  printf("\t        |YOUR HIGHER NOTE|: %f", valor4);
	
		if(valor1<=valor2 && valor1<=valor3 && valor1<=valor4)  printf("\n\n\t        |YOUR LOWEST NOTE|: %f", valor1);
		else if(valor2<=valor1 && valor2<=valor3 && valor2<=valor4)  printf("\n\n\t        |YOUR LOWEST NOTE|: %f", valor2);
		else if(valor3<=valor1 && valor3<=valor2 && valor3<=valor4)  printf("\n\n\t        |YOUR LOWEST NOTE|: %f", valor3);
		else if(valor4<=valor1 && valor4<=valor2 && valor4<=valor3)  printf("\n\n\t        |YOUR LOWEST NOTE|: %f", valor4);
	
		printf("\n\n-----------------------------------------------------\n\n"); 
		printf("          DO YOU WANT TO REPEAT THE PROCESS?\n\n");
		printf("  TYPE [s] IF YES  ---------  TYPE ANOTHER KEY IF NOT\n");
		scanf("%c", &letra);
	 
	
	}	
	
	return 0;
}
