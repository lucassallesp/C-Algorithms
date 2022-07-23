#include <stdlib.h>
#include <stdio.h>
#define MAX 3

void maiorCorrente(double *valoresCorrente[])
{
    double maior=0;
     
    for(int i=0; i<MAX; i++)
    {
        if(*valoresCorrente[i]>= maior) 
        {
            maior = *valoresCorrente[i];
        }
    }
    printf("O maior valor de corrente e: %f", maior);

}

void cor(double *valoresCorrente[])
{
    float mediaCorrente = 0, somaCorrente = 0;
	
	for(int x=0; x<MAX; x++)
	{
	   somaCorrente += *valoresCorrente[x];
	}
	mediaCorrente = somaCorrente / MAX;
	printf(">> A corrente media vale %.2fmA\n\n", mediaCorrente);	
    getchar();	
}


int main()
{
    int i;
    double valoresCorrente[MAX];

    printf("Digite, um a um, os 100 valores de corrente eletrica em mA\n\n");
    for(i=0; i<MAX; i++)
    {
        scanf("%f", &valoresCorrente[i]);
	    getchar();
    }
  
    maiorCorrente(valoresCorrente);
    cor(valoresCorrente);
    
    getchar();

    return 1;
}





