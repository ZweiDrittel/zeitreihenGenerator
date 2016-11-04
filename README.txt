input.txt muss mit den Daten für die zu erstellende Zeitreihe gefüttert werden.
Dabei sieht die Datei folgenden Format vor:

1. Zeile: 		Quellenanzahl;
folgende zeilen: 	Quellnr (bei 0 beginnend); Quellstärke in GE/s; Intervall;

ALLE Parameter, egal ob am Zeilenende oder nicht, sind mit einem Semikolon abzuschließen.
Die Eingabeende ist mit der Zeichenkombination *-* zu kennzeichnen.

Eine input.txt könnte z.B. wie folgend aussehen:

3;
0; 100; 8760;
1; 280; Mo-Fr_08-16;
2; 300; 40tägig_10-13;
*-*