//Implementierung der Funktionen, die Ein-und Ausgabe in/aus Datei bewerkstelligen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "flowControl.h"

extern int errorOccured;
extern const int readBufferSize;

FILE *openFile(char path[200], char mode[5])
{
    FILE *file = fopen(path, mode);
    if(file == NULL)
    {
        errorCall("Datei konnte nicht geoeffnet werden...");
    }
    else
    {
        printf("Datei erfolgreich geoeffnet!\n");
    }
    return file;
}

void readInput(FILE *file, char buffer[readBufferSize])
{
	memset(buffer, '\0', readBufferSize*sizeof(char));
	for(int i = 0; i < readBufferSize; i++)
	{
		fscanf(file, "%c", &buffer[i]);
		if(buffer[i] == ';')
			break;
	}
}

