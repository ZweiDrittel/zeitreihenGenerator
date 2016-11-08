//Implementierung der Funktionen, die Ein-und Ausgabe in/aus Datei bewerkstelligen

#include <stdio.h>
#include <stdlib.h>
#include "flowControl.h"

extern int errorOccured;

void openFile(FILE *file, char *path, char *mode)
{
	file = fopen(path, mode);
	if(file == NULL)
	{
		errorCall("Datei konnte nicht geoeffnet werden...");
	}
	else
	{
		printf("Datei erfolgreich geoeffnet!\n");
	}
}

void getSourceCount(FILE *file, int *counter)
{
	if(1 != fscanf(file, "%d", counter))
	{
		errorCall("Auslesen der Quellenanzahl misslungen...");
	}
	else
	{
		printf("Quellenanzahl ausgelesen. Es werden %d Quellen"
		       " berücksichtigt\n", *counter);
	}
}
