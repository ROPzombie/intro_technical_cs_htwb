#include  <stdio.h>
#include  <ctype.h>
union zahl {
        float   float_zahl;
        double  double_zahl;
        struct {
           unsigned bitmuster1;
           unsigned bitmuster2;
        } long_format;
};
union zahl  z1, z2;

void  dual_ausgabe(unsigned long zahl, int strich1, int strich2) {
   int i;
   for (i=sizeof(long)*8-1; i>=0; i--)
      printf("%ld%s", (zahl>>i) & 1, (i==strich1 || i==strich2) ? " | " : "");
}

int  main(void)
{
   printf("Gib Deine Gleitpunktzahl ein: ");
   scanf("%lf", &z1.double_zahl);

   z2.float_zahl = z1.double_zahl;
   printf("double: ");
   dual_ausgabe(z1.long_format.bitmuster2, 31, 20);
   dual_ausgabe(z1.long_format.bitmuster1, -1, -1);
   printf("\n float: ");
   dual_ausgabe(z2.long_format.bitmuster1, 31, 23);
   printf("\n");

   return 0;
}
