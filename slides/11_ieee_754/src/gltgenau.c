#include <stdio.h> /* muss bei meisten C-Programmen angegeben werden */

int  main(void) {
   int  i = 1; /* Speicher i Wert 1 zuweisen; int=Ganzzahl */

   while (i <= 10) { /* solange i kleiner gleich 10 folg. 2 Zeilen ... */
      printf("%.10f\n", (float)i/10); /* Gleitpunktdivision hier nun */
      i = i + 1;       /* Auf Wert von i 1 aufaddieren               */
   }
   return 0;
}
