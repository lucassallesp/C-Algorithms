//==============================================================================
//
// Title:		prog2.c
// Purpose:		A short description of the implementation.
//
// Created on:	16/06/2021 at 17:48:41 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================
#include <math.h>
#include <utility.h>
#include <ansi_c.h>

void main()
{
	float numero, e=2.718;
	int fat, i, n, n1;
	
	do{
	Cls();
	printf(">> Calculadora <<\n\n");
	printf("[1]- Raiz Quadrada\n");
	printf("[2]- Logaritmo na base 10\n");
	printf("[3]- Logaritmo neperiano\n");
	printf("[4]- Expoente com base neperiana (e^x)\n");
	printf("[5]- Fatorial de um numero\n");
	printf("[6]- Inverso de um numero (1/x)\n");
	
	printf("\n>> Escolha um: ");
	scanf("%d", &n);
	getchar();
	
	switch(n)
	{
		case 1: {
					printf("\nDigite um numero: ");
					scanf("%f", &numero);
					getchar();
					printf("A raiz quadrada de %f e: %f", numero, sqrt(numero));
				}break;
		
		case 2: {
					printf("\nDigite um numero positivo diferente de 0: ");                               
					scanf("%f", &numero);                                       
					getchar();                                                  
					printf("O logaritmo na base 10 de %f e: %f", numero, log10(numero));
				}break;
		
		case 3: {
					printf("\nDigite um numero positivo diferente de 0: ");                               
					scanf("%f", &numero);                                       
					getchar();                                                  
					printf("O logaritmo neperiano de %f e: %f", numero, log(numero));
				}break;
		
		case 4: {
					printf("\nDigite um numero: ");                               	
					scanf("%f", &numero);                                       
					getchar();                                                  
					printf("O valor de E elevado a %f e: %f", numero, pow(e,numero));
				}break;
		
		case 5: {
					printf("\nDigite um numero inteiro: ");                               	
					scanf("%d", &n1);                                       
					getchar(); 
					for(fat = 1; n1 > 1; n1 = n1 - 1)
						fat = fat * n1;
					
					printf("O fatorial vale: %d", fat);
				}break;
		
		case 6: {
					printf("\nDigite um numero diferente de 0: ");                               	 
					scanf("%f", &numero);                                            
					getchar();                                                       
					printf("O valor do inverso de %f e: %f", numero, 1.0/numero);
				}break;
		
		default: {
					printf("\nOpcao invalida, tente novamente --------------- [ENTER] para continuar ");
					getchar();
				 } 
	                                
	}
	}while((n!=1)&&(n!=2)&&(n!=3)&&(n!=4)&&(n!=5)&&(n!=6));
	
	getchar();
}
