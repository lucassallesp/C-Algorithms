//==============================================================================
//
// Title:		funcoes.h
// Purpose:		A short description of the interface.
//
// Created on:	04/08/2021 at 09:47:39 by CESAR.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#ifndef __funcoes_H__
#define __funcoes_H__

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

int Declare_Your_Functions_Here (int x);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __funcoes_H__ */
double modulacao(double medida);
void salvardados(char *arquivo,double valor);
void salvardados (char *arquivo, double valor)
{
 int i;
 FILE *fp = fopen(arquivo,"at");
if (fp==NULL) {
 printf("Erro na abertura do arquivo.\n");
 exit(1); }
 fprintf(fp,"%.4lf",valor);
 putc('\n',fp); 
 fclose(fp);
}
double modulacao(double medida)
{
double valor_offset;
valor_offset=sqrt(medida)+1.2*medida;
return valor_offset;
}
