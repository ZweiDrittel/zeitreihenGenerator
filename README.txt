input.txt muss mit den Daten f�r die zu erstellende Zeitreihe gef�ttert werden.
Die maximal zul�ssige Anzahl an Quellen betr�gt 100.
Dabei sieht die Datei folgenden Format vor:

1. Zeile: 		Quellenanzahl;
folgende zeilen: 	Quellnr (bei 0 beginnend); Quellst�rke in GE/s; Intervall;

ALLE Parameter, egal ob am Zeilenende oder nicht, sind mit einem Semikolon abzuschlie�en.
Die Eingabeende ist mit der Zeichenkombination *-* zu kennzeichnen.

Eine input.txt k�nnte z.B. wie folgend aussehen:

3;
0; 100; 8760;
1; 280; Mo-Fr_08-16;
2; 300; 40t�gig_10-13;
*-*