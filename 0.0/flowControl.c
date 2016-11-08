//Implementierung der Funktionen, die Ablauf des Programm dokumentieren (Ausgaben in Terminal etc...

#include <stdio.h>
#include <stdlib.h>

extern int errorOccured;

void printHeader()
{
	printf("###############################################\n"
	       "#######       Header steht hier so      #######\n"
	       "###############################################\n\n");
}

void errorCall(char *message)
{
	printf("%s...\n", message);
	errorOccured = 1;
}
