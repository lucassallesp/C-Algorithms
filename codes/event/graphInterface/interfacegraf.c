

#include "toolbox.h"
#include <ansi_c.h>
#include <analysis.h>
#include <cvirte.h>
#include <userint.h>
#include "interfacegraf.h"
static int interface;
int main (int argc, char *argv[])
{
if (InitCVIRTE (0, argv, 0) == 0)

return -1; /* out of memory */
if ((interface = LoadPanel (0, "interfacegraf.uir", INTERFACE)) < 0)
return -1;
DisplayPanel (interface);
RunUserInterface ();
DiscardPanel (interface);
return 0;}


  		  int CVICALLBACK OndaSerra (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}



int CVICALLBACK FecharPrograma (int panel, int control, int event,
void *callbackData, int eventData1, int eventData2)

{ switch (event)
{
case EVENT_COMMIT:
QuitUserInterface (0);
break;

}
return 0;}
int CVICALLBACK PlotarDados (int panel, int control, int event,
void *callbackData, int eventData1, int eventData2)

{
int i;
float dados[100];
for(i=0;i<=99;i++) dados[i]=Random(-0.5,0.5);
switch (event)
{
case EVENT_COMMIT:
DeleteGraphPlot (interface,INTERFACE_GRAFICO,-1, VAL_IMMEDIATE_DRAW);
PlotY (interface,INTERFACE_GRAFICO,dados,100, VAL_FLOAT, VAL_THIN_LINE,

VAL_EMPTY_SQUARE, VAL_SOLID, 1, VAL_RED);
break;
}
return 0;}
int CVICALLBACK OndaQuadrada (int panel, int control, int event,
void *callbackData, int eventData1, int eventData2)

{
int i;
double square[128],*phase=NULL;
phase=(double*)malloc(128*sizeof(double));
for(i=0;i<=127;i++) phase[i]=0.0;
SquareWave (128, 1.0, 7.8125e-3, phase, 50.0, square);
switch (event)
{
case EVENT_COMMIT:
DeleteGraphPlot (interface,INTERFACE_GRAFICO,-1, VAL_IMMEDIATE_DRAW);
PlotY (interface,INTERFACE_GRAFICO,square,128, VAL_DOUBLE,

VAL_THIN_LINE, VAL_EMPTY_SQUARE, VAL_SOLID, 1, VAL_BLUE);
break;
}
return 0;
}

int CVICALLBACK OndaSeno (int panel, int control, int event,
void *callbackData, int eventData1, int eventData2)

{
int i;
double seno[128],*phase=NULL;
phase=(double*)malloc(128*sizeof(double));
for(i=0;i<=127;i++) phase[i]=0.0;
SineWave (128, 1.0, 7.8125e-3,phase,seno );
switch (event)
{
case EVENT_COMMIT:
DeleteGraphPlot (interface,INTERFACE_GRAFICO,-1, VAL_IMMEDIATE_DRAW);
PlotY (interface,INTERFACE_GRAFICO,seno,128, VAL_DOUBLE, VAL_THIN_LINE,

VAL_EMPTY_SQUARE, VAL_SOLID, 1, VAL_GREEN);
break;
}
return 0;
}
