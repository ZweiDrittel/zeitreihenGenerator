#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sourceCount = 0;
//Var für Datei (In Hackbuch nach id-Methode gucken)

int main(int argc, char *argv[])
{
/*
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
	int errorcheck = 0;

	//Zuerst sourceCount aus input ermitteln
	errorcheck = getSourceCount();
	
	//sourceEmissions an sourceCount angepasst erstellen, dass Emission für jede Quelle (zu einem Zeitpunkt) ermittelt werden kann
	double sourceEmissions[sourceCount];
	
	//Zeile für Zeile input auslesen und speichern
	
	//Stunde für Stunde durch Jahr gehen, jeweils Emissionen ermitteln und ausgeben
	
	//freuen
	
	return 0;
}
