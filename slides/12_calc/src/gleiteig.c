#include <stdio.h>
#include <float.h>
#define PUNKTE "............................................................." \
               "............................................................."
#define STRICHE "------------------------------------------------------------" \
                "------------------------------------------------------------"
#define FLT_BITS      sizeof(float)*8
#define FLT_EXP_DIG   FLT_BITS-FLT_MANT_DIG
#define DBL_BITS      sizeof(double)*8
#define DBL_EXP_DIG   DBL_BITS-DBL_MANT_DIG

int  main(void)
{
   /*-------- Ausgabe von float-Eigenschaften -------------------------------*/
   printf("\n%79.79s\n", STRICHE);
   printf("%25sfloat (%d Bits = %d Bytes)\n", " ", FLT_BITS, sizeof(float));
   printf("%79.79s\n\n", STRICHE);
   printf("|.|%*.*s|%*.*s|\n", FLT_EXP_DIG, FLT_EXP_DIG, PUNKTE,
                               FLT_MANT_DIG-1, FLT_MANT_DIG-1, PUNKTE);
   printf("%*.*s\n", FLT_BITS+4, FLT_BITS+4, STRICHE);
   printf("|V|%*s|%*s|\n\n", FLT_EXP_DIG, "BE",
                             FLT_MANT_DIG-1, "Mantisse");
   printf("%35s%s\n", " ", "V  = Vorzeichenbit (0=positiv;1=negativ)");
   printf("%35s%s (%d Bits)\n", " ", "BE = Biased Exponent", FLT_EXP_DIG);
   printf("%35s%s (%d Bits)\n", " ", "Mantisse", FLT_MANT_DIG-1);
   printf("Wertebereich der Exponenten:\n");
   printf("        dual:  2^%d .. 2^%d\n", FLT_MIN_EXP, FLT_MAX_EXP);
   printf("     dezimal: 10^%d .. 10^%d\n\n", FLT_MIN_10_EXP, FLT_MAX_10_EXP);
   printf("Wertebereich:\n");
   printf("     dezimal:  %.2E .. %.2E\n\n", FLT_MIN, FLT_MAX);
   printf("Anzahl der signifikanten Dezimalstellen: %d\n\n", FLT_DIG);
   /*-------- Ausgabe von double-Eigenschaften ------------------------------*/
   printf("\n%79.79s\n", STRICHE);
   printf("%25sdouble (%d Bits = %d Bytes)\n", " ", DBL_BITS, sizeof(double));
   printf("%79.79s\n\n", STRICHE);
   printf("|.|%*.*s|%*.*s|\n", DBL_EXP_DIG, DBL_EXP_DIG, PUNKTE,
                               DBL_MANT_DIG-1, DBL_MANT_DIG-1, PUNKTE);
   printf("%*.*s\n", DBL_BITS+4, DBL_BITS+4, STRICHE);
   printf("|V|%*s|%*s|\n\n", DBL_EXP_DIG, "BE",
                             DBL_MANT_DIG-1, "Mantisse");
   printf("%35s%s\n", " ", "V  = Vorzeichenbit (0=positiv;1=negativ)");
   printf("%35s%s (%d Bits)\n", " ", "BE = Biased Exponent", DBL_EXP_DIG);
   printf("%35s%s (%d Bits)\n", " ", "Mantisse", DBL_MANT_DIG-1);
   printf("Wertebereich der Exponenten:\n");
   printf("        dual:  2^%d .. 2^%d\n", DBL_MIN_EXP, DBL_MAX_EXP);
   printf("     dezimal: 10^%d .. 10^%d\n\n", DBL_MIN_10_EXP, DBL_MAX_10_EXP);
   printf("Wertebereich:\n");
   printf("     dezimal:  %.2lE .. %.2lE\n\n", DBL_MIN, DBL_MAX);
   printf("Anzahl der signifikanten Dezimalstellen: %d\n", DBL_DIG);
   return(0);
}
