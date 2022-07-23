#include <ansi_c.h>
#include "lab1.h"

int main()
{
	int bandeira_tar, i, consumo_kWh;
	float preco_kWh, total, taxa_ilum, imposto, taxa_band;
	char consumidor;
	
	printf("==============================================================\n");
	printf("            Calculadora de Conta de Energia\n");
	printf("==============================================================\n");
	
	printf("Informe consumo de energia em kWh exibido na conta de energia:\n");
	printf(">> ");
	scanf("%d", &consumo_kWh);
	getchar();
	
	printf("\nInforme o preço do kWh exibido na conta de energia:\n");
	printf(">> ");
	scanf("%f", &preco_kWh);
	getchar();
	
	printf("\nInforme bandeira tarifaria exibida na conta de energia:\n");
	printf("-[1] para VERDE\n");
	printf("-[2] para VERMELHO\n");
	printf("-[3] para AMARELO\n\n");
	printf(">> ");
	scanf("%d", &bandeira_tar);
	getchar();
 
	switch(bandeira_tar)
	{
		case '1': taxa_band = 0; break;
		
		case '3':
			{ 
				if(consumo_kWh<100) taxa_band = 0;break;
				for(i=1;i<(consumo_kWh/100);i++) 
				{
					taxa_band = 10.5*i;
				}break;
			}
			
		case '2': 
			{ 
				if(consumo_kWh<100) taxa_band = 0;break;
				for(i=1;i<(consumo_kWh/100);i++) 
				{
					taxa_band = 3.5*i;
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
	consumidor = toupper(consumidor);
	getchar();
	
	switch(consumidor)
	{
		case 'R': taxa_ilum = 23.45; break;
		case 'C': taxa_ilum = 29.23; break;
		case 'I': taxa_ilum = 37.06; break;
		default:  printf("Opcao Invalida\n");
	}
	
	imposto = 0.04*consumo_kWh*preco_kWh + 0.02*taxa_ilum;
	total = calculaContaEnergia(consumo_kWh, preco_kWh, taxa_ilum, imposto, taxa_band);
	
	printf("==============================================================\n"); 
	printf("O valor a ser pago pela conta de energia e: %.2f", total);
	getchar();
	
		
	return 0;
}
