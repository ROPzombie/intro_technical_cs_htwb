#include <stdio.h> /* muss bei meisten C-Programmen angegeben werden */

int  main(void) {
   float  i = 0.1; /* Speicher i Wert 0.1 zuweisen; float=Gleitpunktzahl */

   while (i != 1.0) { /* solange i ungleich 1.0 folg. 2 Zeilen ausfuehren */
      printf("%.10f\n", i); /* Wert von i mit 10 Stellen nach Pkt ausgeb. */
      i = i + 0.1;          /* Auf Wert von i 0.1 aufaddieren             */
   }
   return 0;
}

