#include <utility.h>
#include <ansi_c.h>
//==============================================================================
//
// Title:		string2.c
// Purpose:		A short description of the implementation.
//
// Created on:	09/02/2021 at 16:11:55 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "string2.h"

//==============================================================================
// Constants
#define MAX 5
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
int i, idade=0, cont1=0, cont2=0, contm=0, contf=0;	  //PARAMETRO, IDADE DA PESSOA, CONTAGEM
char nome[40], est[15], m[9]="solteiro", f[9]="solteira", job[30], gen[10], loop;

do{ 
printf("=======================================================================\n");
printf("   ESSE PROGRAMA CONTA A QUANTIDADE DE PESSOAS DE SEUS RESPECTIVOS\n");
printf("GENEROS QUE SÃO MAIORES DE IDADE E MOSTRA ALGUNS DE SEUS DADOS PESSOAIS\n");
printf("=======================================================================\n");
printf("OBSERVAÇÃO: \n\nDIGITE [m] PARA GENERO MASCULINO\nDIGITE [f] PARA GENERO FEMININO\n\n");
printf("=======================================================================\n\n");

//DADOS E CONDIÇÕES:
for(i=1; i<=MAX; i++)
	{	
	printf("Digite o Nome da Pessoa:\t");
	gets(nome);
	printf("Digite a idade:\t\t\t");
	scanf("%d", &idade);
	getchar();
	printf("Informe seu genero:\t\t");
	gets(gen);
	printf("Informe seu estado civil:\t");
	gets(est);
	printf("Informe sua profissão:\t\t");
	gets(job);
	printf("\n\n");
	
	if((idade>=18) && (gen[0]=='f') && (strcmp(est,f)==0)) cont1++;
	if((idade>=18) && (gen[0]=='m') && (strcmp(est,m)==0)) cont2++;
	if((gen[0]=='m') && (job[0]=='Engenheiro')) contm++;
	if((gen[0]=='m') && (job[0]=='Engenharia')) contm++;
	if((gen[0]=='m') && (job[0]=='engenheiro')) contm++;
	if((gen[0]=='m') && (job[0]=='engenharia')) contm++;
	if((gen[0]=='f') && (job[0]=='Engenharia')) contf++;
	if((gen[0]=='f') && (job[0]=='Engenheira')) contf++;
	if((gen[0]=='f') && (job[0]=='engenheira')) contf++;
	if((gen[0]=='f') && (job[0]=='engenharia')) contf++;
	}
Cls();

//RESULTADOS:
printf("=================================================================\n");
printf("PRESSIONE [ENTER] PARA VER OS RESULTADOS:\n");
printf("=================================================================\n");
GetKey();
printf("\nA quantidade mulheres solteiras que são maiores de idade é:   %d\n", cont1); 
printf("A quantidade homens solteiros que são maiores de idade é:     %d\n\n", cont2);
printf("A quantidade de mulheres que são engenheiras é:               %d\n", contf);
printf("A quantidade de homens que são engenheiros é:                 %d\n\n", contm);

printf("=================================================================\n");
printf("Deseja Repetir o Processo?\n\nDigite [s] se SIM.\nDigite qualquer outra tecla para NÃO:\t");
scanf("%c", &loop);
getchar();
Cls();
loop=toupper(loop);
}while(loop=='S');

return 0;
}
