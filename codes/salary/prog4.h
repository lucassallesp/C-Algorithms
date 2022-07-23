#ifndef __prog4_H__
#define __prog4_H__

#ifdef __cplusplus
    extern "C" {
#endif

#include "cvidef.h"

float salario(float horas, float dependente);
float inss(float x, float y);
float imposto(float x, float y);

float imposto(float x, float y)
{
	return (20*x + 400*y)*0.07;	
}

float inss(float x, float y)
{
	return (20*x + 400*y)*0.085;
}

float salario(float horas, float dependente)
{
	return (20*horas + 400*dependente)*0.845;
}

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __prog4_H__ */
