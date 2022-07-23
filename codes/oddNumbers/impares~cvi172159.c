//==============================================================================
//
// Title:		impares.c
// Purpose:		A short description of the implementation.
//
// Created on:	18/11/2020 at 16:09:08 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "impares.h"

//==============================================================================
// Constants

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
int Define_Your_Functions_Here (int x)
{
	return x;
}
				   
			

#include <ansi_c.h>
#include <cvirte.h>

int main ()
{
	int i,j=0,n=10,aux;
	
	for(i=1;i<=2*n;i++)
	{
		aux=i%2;
		if (aux!=0) {j++;printf("%do termo e=%d\n",j,i);}
	}
	getchar();
	return 1;
}
	

