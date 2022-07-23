#ifndef __lab7_H__
#define __lab7_H__

#ifdef __cplusplus
    extern "C" {
#endif

#include "cvidef.h"

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __lab7_H__ */

typedef struct {
	int matricula;
	float nota1;
	float nota2;
} Aluno;

typedef struct {
	int matricula;
	float dado1;
	float dado2;
	int identidade;
	int numAlunos;
	Aluno ensinados[100];
} Professor;

void gravarProfs ( Professor * vetProfs, int totalProfs );

void gravarProfs ( Professor * vetProfs, int totalProfs ) 
{
	FILE * arq;
	int p;
	int a;
	
	arq = fopen("professor.txt","w");
	if (arq == NULL) {
		printf("Erro na abertura do arquivo.\n");
		system("PAUSE");
		exit(1);
	}
	
	for (p=0;p<totalProfs; p++) 
	{
		fprintf(arq, "%d\n", vetProfs[p].identidade);
			for (a=0;a<vetProfs[p].numAlunos;a++) 
			{
				fprintf(arq,"%d\n",vetProfs[p].ensinados[a].matricula);
				fprintf(arq,"%d\n",vetProfs[p].ensinados[a].nota1);
				fprintf(arq,"%d\n",vetProfs[p].ensinados[a].nota2);
			}
	}
	fclose(arq);
}

void cadastrarAlunos (Aluno * vetAl, int * totalAlunos) 
{
	int qtde;
	int totFinal;
	int i;

	printf("Quantos alunos serão cadastrados? ");
	scanf("%i", &qtde);
	
	totFinal = (*totalAlunos) + qtde;
	
	for (i=*totalAlunos; i< totFinal; i++) 
	{
		printf("Digite a matricula do aluno %d: ",i+1);
		scanf("%i",&vetAl[i].matricula);
		printf("Nota 1 do aluno %d: ",i+1);
		scanf("%f", &vetAl[i].nota1);
		printf("Nota 2 do aluno %d: ", i+1);
		scanf("%f", &vetAl[i].nota2);
	}
	
	*totalAlunos = totFinal;
}

void cadastrarProfs (Professor * vetProfs, int * totalProfs) 
{
	int qtde2;
	int totFinal2;
	int i2;
	
	printf("Quantos profs serão cadastrados? ");
	scanf("%i", &qtde2);
	
	totFinal2 = (*totalProfs) + qtde2;
	
	for (i2=*totalProfs; i2< totFinal2; i2++) 
	{
		printf("Digite a matricula do prof %d: ",i2+1);
		scanf("%i",&vetProfs[i2].matricula);
		printf("Dado 1 do prof %d: ",i2+1);
		scanf("%f", &vetProfs[i2].dado1);
		printf("Dado 2 do prof %d: ", i2+1);
		scanf("%f", &vetProfs[i2].dado2);
	}
	*totalProfs = totFinal2;
}
