#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "affiche_caracteres.h"
/* Testez le programme*/
/* un test intérressant : ./encadre + "$(date)" */
static void  
encadre(char c, char *s)
{
    int longueur = strlen(s);

    printf("\n  ");
    affiche_caracteres(c, longueur+4);
    printf("\n  %c %s %c\n  ", c, s, c);
    affiche_caracteres(c, longueur+4);
    printf("\n\n");
}

static void 
usage(char *s)
{
    fprintf(stderr, "Usage: %s «caractère» «chaîne»\n", s);
    exit(EXIT_FAILURE);
}

int 
main(int argc, char *argv[])
{
    if (argc != 3)
        usage(argv[0]);
    else
        encadre(argv[1][0], argv[2]);
    return EXIT_SUCCESS;
}
