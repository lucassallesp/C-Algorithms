#include <ansi_c.h>
#include <math.h>
//==============================================================================
//
// Title:		switch2.c
// Purpose:		A short description of the implementation.
//
// Created on:	24/03/2021 at 10:35:11 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "switch2.h"

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
float temperatura, velocity, amplitude, freq, current, tension, pw, res;
char choice;
//==============================================================================
// Global functions

/// HIFN  What does your function do?
/// HIPAR x/What inputs does your function expect?
/// HIRET What does your function return?

int main()
{
	float increase(); float decrease(); float current_temperature();
  	float frequency(); float power();   float resistance();
     
	
	char loop, choose1, choose2;
	float temp = 0, freq1, pow1, res1;
	
do{
	printf("======================================================\n"); 
	printf("        >>>>>>>> Universal  Calculator <<<<<<<<\n");
  	printf("======================================================\n"); 
	printf("CHOOSE WHAT YOU WANT:\n\n");
	printf(">> Temperature Analyze:  TYPE [a]\n");
	printf(">> Frequency Calculator: TYPE [f]\n");
	printf(">> Circuit Power:        TYPE [p]\n");
	printf(">> Circuit Resistance:   TYPE [r]\n\n");
	printf(">> ");
	scanf("%c", &choose1);
	getchar();				  
	
	printf("======================================================\n");  
	
	switch(choose1)
	{
		case 'a': {
					
					printf("Type the temperature in �C >>  ");
					scanf("%f", &temperatura);
					getchar();
					printf("\nCHOOSE WHICH OPTION YOU WANT:\n\n");
					printf(">> Convert Temperature:  TYPE [c]\n");
					printf(">> Increase Temperature: TYPE [i]\n");
					printf(">> Decrease Temperature: TYPE [d]\n\n");
					printf(">> ");
				  	scanf("%c", &choose2);                               
					choose2 = toupper(choose2); 
					printf("======================================================\n"); 
					
						if(choose2=='C')
						{
							printf("CHOOSE WHAT YOU WANT:\n\n");              	
							printf(">> Convert to Kelvin     - TYPE [k]\n");  		
							printf(">> Convert to Fahrenheit - TYPE [f]\n");  		
							printf(">> Convert to Celsius    - TYPE [c]\n\n");		
							current_temperature();
						}
						
						else if(choose2=='I') {
								increase();
								getchar();
							}
							
						else if(choose2=='D'){
								decrease();
								getchar(); 
							}
						else printf("ERROR: Invalid Command\n");
				  
				  }; break;
		
		case 'f': freq1 = frequency(); break;
		
		case 'p': pow1 = power(); break;
		
		case 'r': res1 = resistance();break; 
		
		default : printf("2ERROR: Invalid Command\n"); 
	}   
printf("Do you want to repeat the process?\n\n");
printf(">> For YES - Type [y]\n>> For NO - Type [Any other key]\n\n");
printf(">> ");
scanf("%c", &loop);
loop = toupper(loop);
}while(loop =='Y');	  

getchar();	
return 0;	
}

float increase()
{
	temperatura = temperatura + 1.5;
	printf(">> Temperature increased by 1.5�C\n");
	printf(">> %.2f �C\n", temperatura);
	printf("======================================================\n"); 
	return temperatura;
}

float decrease()
{
	temperatura = temperatura - 2.2;
	printf(">> Temperature decreased by 2.2�C\n");        
	printf(">> %.2f �C\n", temperatura);
	printf("======================================================\n"); 
	return temperatura;
}

float current_temperature()
{
   
	while((choice!='C') && (choice!='F') && (choice!='K')){
	printf(">> ");           
	scanf("%c", &choice);    
	choice = toupper(choice);
	   
		if(choice=='K') {
				  	temperatura = temperatura + 273;
					printf("\n<< The current temperature is %.2f�K >>\n", temperatura);
				   	printf("======================================================\n"); 
					getchar();
				   } 
		
		else if(choice=='F') {
					temperatura = (temperatura * (9 / 5)) + 32;
					printf("\n<< The current temperature is %.2f�F >>\n", temperatura);
				   	printf("======================================================\n"); 
					getchar();
				  }
	
		else if(choice=='C') {
					printf("\n<< The current temperature is %.2f�C >>\n", temperatura);
				    printf("======================================================\n"); 
					getchar();
				  }  
	
	 }
	
	return temperatura; 
}
 
float frequency()                                                                                           
{                                                                                                           
	printf("Please inform the propagation speed of the wave in \nmeters per second and its amplitude\n\n");     
	printf(">> V(velocity) = ");                                                                               
	scanf("%f", &velocity);                                                                                 
	printf(">> A(amplitude) = ");                                                                              
	scanf("%f", &amplitude);                                                                                
	freq = velocity / amplitude;                                                                            
	printf("\nThe propagation frequency of this wave is %.2fHz\n", freq);
	printf("======================================================\n");
	                                                                                                        
	return freq;                                                                                            
}                                                                                                           
                                                                                                            
float power()                                                                                               
{                                                                                                           
	printf("Inform the circuit electric current and its\nelectric tension\n\n");                               
	printf(">> I(electric current) = ");                                                                       
	scanf("%f", &current);                                                                                  
	printf(">> U(electric tension) = ");                                                                       
	scanf("%f", &tension);
	
	pw = current * tension;                                                                                 
	printf("\nThe power of this circuit is %.2fW\n", pw);
	printf("======================================================\n");
	                                                                                                        
	return pw;                                                                                              
}                                                                                                           
                                                                                                            
float resistance()                                                                                          
{                                                                                                           
	printf("Inform the circuit current and its electric tension\n\n");                               
    printf(">> I(electric current) = ");                                                                       
	scanf("%f", &current);                                                                                  
	printf(">> U(electric tension) = ");                                                                       
	scanf("%f", &tension);                                                                                  
	                                                                                                        
	res = tension / current;                                                                                
	printf("\nThe electrical resistence of this circuit is %.2fOhm\n", res); 
	printf("======================================================\n");
	                                                                                                        
	return res;                                                                                             
}                                                                                                           
                                                                                                            
