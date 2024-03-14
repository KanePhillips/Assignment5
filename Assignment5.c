#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv){
    
    printf("Int Min: %d", (int)INT_MIN);
    printf("\nInt Max: %d", (int)INT_MAX);
    printf("\nLong Min: %ld", (long)LONG_MIN);
    printf("\nLong Max: %ld", (long)LONG_MAX);
    printf("\nFloat Min: %g", (float)FLT_MIN);
    printf("\nFloat Max: %g", (float)FLT_MAX);
    printf("\nDouble Min: %g", (double)DBL_MIN);
    printf("\nDouble Max: %g", (double)DBL_MAX);

    printf("\nLong Max cast as int: %d", (int)LONG_MAX);
    printf("\nFloat Max cast as int: %d", (int)FLT_MAX);
    printf("\nDouble Max cast as int: %d", (int)DBL_MAX);

    printf("\nFloat Max cast as a long: %ld", (long)FLT_MAX);
    printf("\nDouble Max cast as a long: %ld", (long)DBL_MAX);

    printf("\nDouble Max cast as a float: %g\n", (float)DBL_MAX);

}