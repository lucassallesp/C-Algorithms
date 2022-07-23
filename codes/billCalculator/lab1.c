#include <utility.h>
#include <ansi_c.h>
#include "lab1.h"

int main()
{
	int MAX, i, j, z = 1, bandeira_tar;
	char consumidor;
	
	printf("Informe o numero de consumidores a calcular a conta de energia:\n");
	printf(">> ");
	scanf("%d", &MAX);
	getchar();
	Cls();
	
	int consumo_kWh[MAX];
	float preco_kWh[MAX], total[MAX], taxa_ilum[MAX], imposto[MAX], taxa_band[MAX];
	
for(i=0; i<MAX; i++)
{	
	Cls();
	printf("==============================================================\n");
	printf("            Calculadora de Conta de Energia\n");
	printf("==============================================================\n");
	
	printf("=> CONSUMIDOR %d:\n\n", ++i);
	--i;
	printf("Informe consumo de energia em kWh exibido na conta de energia:\n");
	printf(">> ");
	scanf("%d", &consumo_kWh[i]);
	getchar();
	
	printf("\nInforme o preço do kWh exibido na conta de energia:\n");
	printf(">> ");
	scanf("%f", &preco_kWh[i]);
	getchar();
	
	printf("\nInforme a bandeira tarifaria exibida na conta de energia:\n");
	printf("-[1] para VERDE\n");
	printf("-[2] para VERMELHA\n");
	printf("-[3] para AMARELA\n\n");
	printf(">> ");
	scanf("%i", &bandeira_tar);
	getchar();

	switch(bandeira_tar)
	{
		case 1: taxa_band[i] = 0; break;
		
		case 3:
			{ 
				if(consumo_kWh[i]<100) taxa_band[i] = 0;break;
				for(i=1;i<(consumo_kWh[i]/100);i++) 
				{
					taxa_band[i] = 10.5*i;
				}break;
			}
			
		case 2: 
			{ 
				if(consumo_kWh[i]<100) taxa_band[i] = 0;break;
				for(i=1;i<(consumo_kWh[i]/100);i++) 
				{
					taxa_band[i] = 3.5*i;
				}break;
			} 
		
		default: printf("Opcao Invalida\n");
	}
	
	printf("\nInforme que tipo de consumidor voce e:\n");
	printf("-[R] para Residencial\n");
	printf("-[C] para Comercial\n");
	printf("-[I] para Industrial\n\n");
	printf(">> ");
	scanf("%c", &consumidor);
	consumidor=toupper(consumidor);
	getchar(); 
	   
	switch(consumidor)
	{
		case 'R': taxa_ilum[i] = 23.45; break;
		case 'C': taxa_ilum[i] = 29.23; break;
		case 'I': taxa_ilum[i] = 37.06; break;
		default:  printf("Opcao Invalida\n");
	}
	
	imposto[i] = 0.04*consumo_kWh[i]*preco_kWh[i] + 0.02*taxa_ilum[i];
	total[i] = calculaContaEnergia(consumo_kWh[i], preco_kWh[i], taxa_ilum[i], imposto[i], taxa_band[i]);
}
	Cls();
	printf("==============================================================\n");
	printf("           RESULTADOS DA CONTA ENERGETICA MENSAL\n");
	printf("==============================================================\n");

	for(j=0; j<MAX; ++j)
	{
		printf(">> O Valor da Conta de Energia do Consumidor %d e: R$%.2f\n\n", z++, total[j]);
	}
	getchar();
	return 0;
}
