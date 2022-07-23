#include <utility.h>
#include <ansi_c.h>
//==============================================================================
//
// Title:		string.c
// Purpose:		A short description of the implementation.
//
// Created on:	06/02/2021 at 13:55:06 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "string.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN  What does your function do?
/// HIPAR x/What inputs does your function expect?
/// HIRET What does your function return?
int main()
{
	int i=1, idade1, idade2, idade3, idade4;
	char nome1[40], nome2[40], nome3[40], nome4[40], consulta[40], p1[25], p2[25], p3[25], p4[25];
	char est1, est2, est3, est4, loop, confirm, opcao;
	
	do{	
	printf("====================================================================================\n");
	printf("              ESSE PROGRAMA REGISTRA OS DADOS CIVIS DE QUATRO PESSOAS\n");
	printf("====================================================================================\n");
	printf("                 Seus dados serão exibidos na tela caso solicitado\n");
	printf("====================================================================================\n\n"); 
	printf("OBSERVAÇÃO:  INFORME O ESTADO CIVIL DE ACORDO COM A SUA RESPECTIVA SIGLA ABAIXO\n\n");
	printf("CASADO     = [c]\nSOLTEIRO   = [s]\nVIUVO      = [v]\nDIVORCIADO = [d]\n\n");
	printf("====================================================================================\n\n");
	
  //Primeira Pessoa	
	printf("Nome da primeira pessoa:\t");
	scanf("%[^\n]s", nome1);
	getchar();
	do{
	printf("Informe sua idade:\t\t");
	scanf("%d", &idade1);
	getchar();}while(idade1<=0);
	printf("Informe sua profissão:\t\t");
	scanf("%[^\n]s", p1);
	getchar();
	printf("Informe seu estado civil:\t");
	scanf("%c", &est1);
	getchar();
	 
  //Segunda Pessoa	
	printf("\nNome da segunda pessoa:\t\t");
	scanf("%[^\n]s", nome2);
	getchar();
	do{
	printf("Informe sua idade:\t\t");
	scanf("%d", &idade2);
	getchar();}while(idade2<=0);
	printf("Informe sua profissão:\t\t");
	scanf("%[^\n]s", p2);
	getchar();
	printf("Informe seu estado civil:\t");
	scanf("%c", &est2);
	getchar();
	
	
  //Terceira Pessoa	
	printf("\nNome da terceira pessoa:\t");
	scanf("%[^\n]s", nome3);
	getchar();
	do{
	printf("Informe sua idade:\t\t");
	scanf("%d", &idade3);
	getchar();}while(idade3<=0);
	printf("Informe sua profissão:\t\t");
	scanf("%[^\n]s", p3);
	getchar();
	printf("Informe seu estado civil:\t");
	scanf("%c", &est3);
	getchar();

  //Quarta Pessoa
	printf("\nNome da quarta pessoa:\t\t");
	scanf("%[^\n]s", nome4);
	getchar();
	do{
	printf("Informe sua idade:\t\t");
	scanf("%d", &idade4);
	getchar();}while(idade4<=0);
	printf("Informe sua profissão:\t\t");
	scanf("%[^\n]s", p4);
	getchar();
	printf("Informe seu estado civil:\t");
	scanf("%c", &est4);
	getchar();
	
	Cls();
	printf("====================================================================================\n");
	
//RESULTADOS:
	
	printf("Deseja consultar seus dados? [s] para SIM, outra tecla para NÃO:  ");
	scanf("%c", &confirm);
	confirm = toupper(confirm);
	getchar();
	
	if(confirm=='S'){
		printf("\nDigite o seu nome: ");
		scanf("%[^\n]s", consulta);
		getchar();
		
		if(strcmp(consulta, nome1)==0){printf("\nNOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome1, idade1, p1); opcao=est1;}
		if(strcmp(consulta, nome2)==0){printf("\nNOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome2, idade2, p2); opcao=est2;}
		if(strcmp(consulta, nome3)==0){printf("\nNOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome3, idade3, p3); opcao=est3;} 
		if(strcmp(consulta, nome4)==0){printf("\nNOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome4, idade4, p4); opcao=est4;} 
		
		switch(opcao)
		{
			case 'c': printf("ESTADO CIVIL: Casado\n"); break;
			case 's': printf("ESTADO CIVIL: Solteiro\n"); break;
			case 'd': printf("ESTADO CIVIL: Divorciado\n"); break;
			case 'v': printf("ESTADO CIVIL: Viuvo\n"); break;
			default: printf("ESTADO CIVIL: Desconhecido\n");
		}
	}
	printf("\n====================================================================================\n\n");
	printf("                    <<< PRESSIONE ENTER PARA CONTINUAR >>>\n\n");
	printf("====================================================================================\n"); 
	getchar();
	printf("OS NOMES E OS DADOS DAS PESSOAS REGISTRADAS NO BANCO DE DADOS SÃO:\n\n");
	printf("NOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome1, idade1, p1);
		switch(est1){
			case 'c': printf("Estado civil: Casado\n\n"); break;
			case 's': printf(" Estado civil: Solteiro\n\n"); break;
			case 'd': printf(" Estado civil: Divorciado\n\n"); break;
			case 'v': printf(" Estado civil: Viuvo\n\n"); break;
			default: printf("Estado civil: Desconhecido\n\n");}
	
	printf("NOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome2, idade2, p2);
		switch(est2){
			case 'c': printf("Estado civil: Casado\n\n"); break;
			case 's': printf("Estado civil: Solteiro\n\n"); break;
			case 'd': printf("Estado civil: Divorciado\n\n"); break;
			case 'v': printf("Estado civil: Viuvo\n\n"); break;
			default: printf("Estado civil: Desconhecido\n\n");}
	
	printf("NOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome3, idade3, p3);
		switch(est3){
			case 'c': printf("Estado civil: Casado\n\n");break;
			case 's': printf("Estado civil: Solteiro\n\n"); break;
			case 'd': printf("Estado civil: Divorciado\n\n"); break;
			case 'v': printf("Estado civil: Viuvo\n\n"); break;
			default: printf("Estado civil: Desconhecido\n\n");}
	
	printf("NOME: %s\nIDADE: %d\nPROFISSÃO: %s\n", nome4, idade4, p4);
		switch(est4){
			case 'c': printf("Estado civil: Casado\n\n");break;
			case 's': printf("Estado civil: Solteiro\n\n"); break;
			case 'd': printf("Estado civil: Divorciado\n\n"); break;
			case 'v': printf("Estado civil: Viuvo\n\n"); break;
			default: printf("Estado civil: Desconhecido\n\n");}
		
	printf("\n====================================================================================\n");
	printf("Deseja repetir o processo? [s] para SIM, outra tecla para NÃO:  ");
	scanf("%c", &loop);
	getchar();
	loop = toupper(loop);
	printf("\n====================================================================================\n"); 
	Cls();
	}while(loop=='S');
	
	return 0;
}
