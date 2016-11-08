//Funktionen, die Ein-und Ausgabe in/aus Datei bewerkstelligen

#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

extern const int readBufferSize;

//Funktion, um Datei zu öffnen und mögliche Fehler zu melden
FILE *openFile(char path[200], char mode[5]);

//Funktion, um bis zum nächste ";" aus InputFile zu lesen
void readInput(FILE *file, char buffer[readBufferSize]);


#endif // FILE_OPERATIONS_H
