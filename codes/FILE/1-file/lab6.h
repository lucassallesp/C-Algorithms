//==============================================================================
//
// Title:		lab6.h
// Purpose:		A short description of the interface.
//
// Created on:	04/08/2021 at 12:33:38 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#ifndef __lab6_H__
#define __lab6_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// External variables

//==============================================================================
// Global functions

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __lab6_H__ */

struct ponto
{
	char x,y,z;
};

typedef struct ponto Ponto;
#include "cvidef.h"

void salvar (char *arquivo, int n, Ponto *vet);
void recuperar (char *arquivo, int n, Ponto *vet);

void salvar (char *arquivo, int n, Ponto *vet)
{
	FILE *fp = fopen (arquivo, "wb");
	if (fp==NULL)
	{
		printf("Erro na abertura do arquivo. \n");
		exit(1);
		fwrite (vet, sizeof(Ponto), n, fp);
		fclose (fp);
	}
}

void recuperar (char *arquivo, int n, Ponto *vet)
{
	char ch;
	
	FILE *fp = fopen (arquivo, "r"); //modo de leitura
		if (fp==NULL) 
		{
			printf("Erro na abertura do arquivo. \n");
			exit(1);
		}
		
	printf("O conteúdo do arquivo -> %s <- eh: \n", arquivo);
	
	while ((ch = fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose (fp);
}
