
#define MAX 3
int i, j, z, x, y; 
float corrente[MAX], tensao[MAX];

int main()
{
	float ten(), cor();
	
	printf("Informe as amostras de corrente coletadas em (mA):\n\n");
	cor();
	
	printf("Informe as amostras de tensao coletadas (V):\n\n");
	ten();
	getchar();
	
	return 1;
	
}

float cor()
{
	float mediaCorrente = 0, somaCorrente = 0;
	
	for(i=0; i<MAX; i++)
	{
		printf(">> ");
		scanf("%f", &corrente[i]);
		getchar();
	}
	
	for(x=0; x<MAX; x++)
	{
	   somaCorrente += corrente[x];
	}
	mediaCorrente = somaCorrente / MAX;
	printf(">> A corrente media vale %.2fmA\n\n", mediaCorrente);
	
	return corrente[0];	
}

float ten()
{
	float mediaTensao = 0, somaTensao = 0; 
	for(j=0; j<MAX; j++)
	{
		printf(">> ");
		scanf("%f", &tensao[j]);
		getchar();	
	}
	
	for(y=0; y<MAX; y++)
	{
	   somaTensao += tensao[y];
	}
	mediaTensao = somaTensao / MAX;
	printf(">> A tensao media vale %.2fV\n", mediaTensao);
	
	
	printf("\nAs tensoes acima de 10,1 Volts e seus respectivos valores de corrente, sao:\n\n");
	
	for(z=0; z<MAX; z++)
	{
		if(tensao[z]>10.1) printf(">> %.2fV e %.2fmA\n", tensao[z], corrente[z]);      
	}	
	
	return tensao[0];
}

