//Funktionen, die Ein-und Ausgabe in/aus Datei bewerkstelligen

#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

//Funktion, um Datei zu öffnen und mögliche Fehler zu melden
void openFile(FILE *file, char *path, char *mode);

//Funktion, um Anzahl der Quellen aus Datei zu ermitteln
void getSourceCount(FILE *file, int *counter);


#endif // FILE_OPERATIONS_H
