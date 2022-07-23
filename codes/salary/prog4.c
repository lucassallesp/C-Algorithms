//==============================================================================
//
// Title:		prog4.c
// Purpose:		A short description of the implementation.
//
// Created on:	17/06/2021 at 18:38:14 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================
#include <utility.h>
#include <ansi_c.h>
#include <prog4.h>

void main()
{
	char *nome[5];
	int i, tempo[5], dep[5];
	float imp_inss[5], imp_ir[5], salario_liq[5];
	
	for(i=0; i<5; i++)
	{
		printf("=====================================================\n");
		printf("         SALARIO LIQUIDO DE CADA FUNCIONARIO\n");
		printf("=====================================================\n"); 
		
		printf("Digite o somente o primeiro nome do funcionario %d:", i=i+1); 
		i= i-1;
		printf("\n>> ");
		nome[i] = malloc(sizeof(char)*30);
		gets(nome[i]);
		
		
		printf("\nInforme o numero de horas trabalhadas:");
		printf("\n>> "); 
		scanf("%d", &tempo[i]);
		getchar();
		
		printf("\nInforme o numero de dependentes:");
		printf("\n>> ");
		scanf("%d", &dep[i]);
		getchar();
		Cls();
	}
	
	for(i=0; i<5; i++)
	{
		imp_inss[i] = inss(tempo[i],dep[i]);
		imp_ir[i] = imposto(tempo[i], dep[i]);
		salario_liq[i] = salario(tempo[i], dep[i]);
	}
	
	printf("Pressione ENTER para exibir os respectivos salarios: ");
	getchar();
	Cls();
	printf("=====================================================\n"); 
	printf("-> FUNCIONARIOS:\n");
	printf("=====================================================\n\n"); 
	
	for(i=0; i<5; i++)
	{
		printf(" NOME\n");
		printf(">> %s\n\n", nome[i]);
		printf(" SALARIO\n");
		printf(">> Valor descontado do imposto de renda: R$%.2f\n", imp_inss[i]);
		printf(">> Valor descontado do INSS: R$%.2f\n", imp_ir[i]);
		printf(">> Valor do salario liquido: R$%.2f\n", salario_liq[i]);
		printf("=====================================================\n\n");
	}
	printf("Pressione qualquer tecla para finalizar >> ");
	GetKey();
	
}






























