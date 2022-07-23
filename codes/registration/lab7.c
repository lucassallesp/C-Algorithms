//==============================================================================
//
// Title:		lab7.c
// Purpose:		A short description of the implementation.
//
// Created on:	04/08/2021 at 12:46:02 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "lab7.h"

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

#include <utility.h>
#include <ansi_c.h>
#include <stdio.h>
#include <lab7.h>

int main()
{
	Professor vetProfs[50];
	int totalProfs = 0;
	
	cadastrarProfs(vetProfs,&totalProfs); //FUNÇÃO DO .H
	gravarProfs(vetProfs, totalProfs);
	GetKey();
	
	return 0;
}
