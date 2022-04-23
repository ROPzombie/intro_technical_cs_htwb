#include <stdio.h> /* muss bei meisten C-Programmen angegeben werden */

#define EPSILON  1e-6

int  main(void) {
   float  i = 0.1; /* Speicher i Wert 0.1 zuweisen; float=Gleitpunktzahl */

                              /* solange i kleiner gleich 1.000001  */
   while (i <= 1.0+EPSILON) { /* folg. 2 Zeilen ausfuehren          */
      printf("%.10f\n", i); /* Wert von i mit 10 Stellen nach Pkt ausgeb. */
      i = i + 0.1;          /* Auf Wert von i 0.1 aufaddieren             */
   }
   return 0;
}
