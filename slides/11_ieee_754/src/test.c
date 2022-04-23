/*
Compilation command for amd_64:
gcc -o filename outname

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    float a = 1.0000001;
    float b = 0.00000005;
    float c = a + b;
    printf("%.40f\n", c);
}

