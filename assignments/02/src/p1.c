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
    unsigned int v;
    printf("Input:");
    scanf("%d", &v);
    bool f;
    f = (v & (v - 1)) == 0;
    printf("Input was: %d\n", v);
    printf("Binary was :");
    bin(v);
    printf("\n");
    printf("Result: f: %d\n", f);
}

