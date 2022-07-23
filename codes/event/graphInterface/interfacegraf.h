								/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File */
/* Copyright (c) National Instruments 2012. All Rights Reserved. */
/* */
/* WARNING: Do not add to, delete from, or otherwise modify the contents */
/* of this include file. */
/**************************************************************************/
#include <userint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Panels and Controls: */
#define INTERFACE 1
#define INTERFACE_GRAFICO 2
#define INTERFACE_BOTAOFECHAR 3 /* callback function: FecharPrograma */
#define INTERFACE_BOTAOPLOTAR 4 /* callback function: PlotarDados */
#define INTERFACE_QUADRADA 5 /* callback function: OndaQuadrada */
#define INTERFACE_SENO 6 /* callback function: OndaSeno */

/* Menu Bars, Menus, and Menu Items: */
/* (no menu bars in the resource file) */

/* Callback Prototypes: */
int CVICALLBACK FecharPrograma(int panel, int control, int event, void *callbackData, int
eventData1, int eventData2);
int CVICALLBACK OndaQuadrada(int panel, int control, int event, void *callbackData, int
eventData1, int eventData2);
int CVICALLBACK OndaSeno(int panel, int control, int event, void *callbackData, int
eventData1, int eventData2);
int CVICALLBACK PlotarDados(int panel, int control, int event, void *callbackData, int
eventData1, int eventData2);

#ifdef __cplusplus
}
#endif
