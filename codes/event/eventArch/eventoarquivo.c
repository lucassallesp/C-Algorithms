#include <ansi_c.h>
#include <cvirte.h>
#include <userint.h>
#include "eventoarquivo.h"
#include "funcoes.h"

static int panelHandle;

int main ()
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;
	if ((panelHandle = LoadPanel (0, "eventoarquivo.uir", PANEL)) < 0)
		return -1;

	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);

	return 0;
}

int CVICALLBACK OkCallback (int panel, int control, int event, void *callbackData, int eventData1, int eventData2)
{
    int res;
    double get,set=0.0000;
    switch (event)
{ case EVENT_COMMIT:

    res = GetCtrlVal (PANEL, PANEL_NUMERIC, &get);
    if ((get>30) || (get<-30))
    {MessagePopup ("Alerta 1", "O valor digitado está fora do range");
    MessagePopup ("Alerta 2", "O valor deverá ser entre -30 a 30");}

    else set=modulacao(get);
    res = SetCtrlVal (PANEL, PANEL_NUMERICGAUGE, set);
    salvardados("medidas.txt",set);
    break;
}
return 0;}


int CVICALLBACK QuitCallback (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}
