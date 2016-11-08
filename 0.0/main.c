#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "fileOperations.h"
#include "flowControl.h"

int errorOccured = 0;      //diverse Stellen auf Fehler überprüfen
const int readBufferSize = 100;  //max. Laenge der Inputstrings

int main(int argc, char *argv[])
{
/* Anleitung time.h
 * time.h Tutorial: time_t zählt Sekunden seit 01.01.1970
 *                  struct tm ist struct in Format
                      struct tm {
                         int tm_sec;    Sekunden
                         int tm_min;    Minuten
                         int tm_hour;   Stunde (0 bis 23)
                         int tm_mday;   Tag im Monat (1 bis 31)
                         int tm_mon;    Monat (0 bis 11)
                         int tm_year;   Jahr (Kalenderjahr minus 1900)
                         int tm_wday;   Wochentag (0 bis 6, Sonntag = 0)
                         int tm_yday;   Tag im Jahr (0 bis 365)
                         int tm_isdst;  Ungleich null bei US-Sommerzeitkonvertierung
                    };    
                time_t times;
                struct tm *date;
                
                times = time(NULL);
                printf("Die Anzahl der Sekunden seit dem 1. Januar 1970 : %ld\n", times);
                
                date = localtime(&times);
                printf("Aktuelle Zeit: %s\n", asctime(date));
                
                times += 86400;
                printf("Die Anzahl der Sekunden seit dem 1. Januar 1970 + 1 Tag: %ld\n", times);

                date = localtime(&times);
                printf("Morgige Zeit: %s\n", asctime(date));
*/
    
    printHeader();
    
    int sourceCount = 0;     //Speichert Anzahl der Quellen
    FILE *inputFile = NULL;   //ID der Input-Datei
    FILE *outputFile = NULL;  //ID der Ouptut-Datei
    char readBuffer[readBufferSize];
    char dataBuffer[readBufferSize];
    memset(readBuffer, '\0', readBufferSize*sizeof(char));
    memset(dataBuffer, '\0', readBufferSize*sizeof(char));
    
/*----------------------------------------------------------------------
 * Input-Datei öffnen und auslesen
 *----------------------------------------------------------------------
 */
    //input-Datei öffnen
    inputFile = openFile("S:\\User\\Ra\\Programme\\C\\zeitreihenGenerator\\input.txt", "r");
    
    //Anzahl an Quellen auslesen
    readInput(inputFile, readBuffer);
    //Daten in dataBuffer umschreiben
    for(int i = 0; i < readBufferSize; i++)
    {
		if(readBuffer[i] == ';')
			break;
		dataBuffer[i] = readBuffer[i];
	}
	sourceCount = atoi(dataBuffer);

    /*
     * sourceEmissions an sourceCount angepasst erstellen, dass Emission 
     * für jede Quelle (zu einem Zeitpunkt) ermittelt werden kann.
     * Daten ausnullen.
     * Zusätzlich Arrays erstellen, um Input zu speichern.
     */
    int inputSourceNr[sourceCount];
    memset(inputSourceNr, 0, sourceCount*sizeof(int));
    double inputEmissions[sourceCount];
    memset(inputEmissions, 0.0, sourceCount*sizeof(double));
    char inputInterval[readBufferSize*sourceCount];
    memset(inputEmissions, '\0', readBufferSize*sourceCount*sizeof(char));
    double sourceEmissions[sourceCount];
    memset(sourceEmissions, 0.0, sourceCount*sizeof(double));
    
    /*
     * Emissionsdaten für jede Quelle auslesen und abspeichern.
     * Umfasst Quellnummer, Quellstärke, und Intervall o.Ä.
     */
    int gogo = 1;
    while(gogo)
    {
		memset(readBuffer, '\0', readBufferSize*sizeof(char));
		readInput(inputFile, readBuffer);
	}
    
    
    return 0;
}
