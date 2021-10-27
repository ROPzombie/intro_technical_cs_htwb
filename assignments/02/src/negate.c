/*
Compilation command for amd_64:
gcc -o filename outname

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bin(unsigned n) {
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main(int argc, char **argv) {
    bool n;  
    int v;             
    int r;       

    printf("No Magic 0/1 (Y/N)? ");
    scanf("%d", &n);
    printf("Input to put magic on: ");
    scanf("%d", &v);
    r = (n ^ (n - 1)) * v;

    printf("Input was: %d\n", v);
    printf("Binary was:\t");
    bin(v);
    printf("\n");
    printf("Result: r:\t", r);
    bin(r);
    printf("\n");
}

