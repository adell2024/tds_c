#include <stdio.h>
#include <stdlib.h>
#include "main_divi.h"
#include "divi.h"

char *argv0;

static void
usage(void)
{
    fprintf(stderr, "Usage: %s «réel» «réel»\n", argv0);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    argv0 = argv[0];
    if (argc < 3)
        usage();

    float f1 = atof(argv[1]);
    float f2 = atof(argv[2]);

    printf("%g / %g = %g\n", f1, f2, division(f1, f2));

    return EXIT_SUCCESS;
}
