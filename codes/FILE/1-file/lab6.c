#include <utility.h>
#include <ansi_c.h>
#include "lab6.h"

int main()
{
	char arquivo[256];
	FILE *fp;
	int i, n=0; //comentário
	char tecla;
	
	printf ("digite o numero de pontos\n");
	scanf("%d",&n);
	tecla=getchar();
	
	Ponto vetent[n], vetsaida[n];
	
	for ( i = 0; i < n; i++)
	{
		printf("digite o valor de x, y e z\n");
		scanf("%c %c %c",&vetent[i].x,&vetent[i].y,&vetent[i].z);
		tecla=getchar();
	}
	
	printf("digite o nome do arquivo de entrada: ");
	scanf("%s", arquivo);
	tecla=getchar();
	
	salvar(arquivo,n,&vetent[0]);
	GetKey();
	recuperar(arquivo, n, &vetsaida[0]);
	GetKey();
	
	return 0;
}
