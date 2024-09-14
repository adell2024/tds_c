#include <stdlib.h>
#include "afficher.h"
#define DIMENSION 3

/* compilation : gcc -c -W -Wall -std=c99 main.c*/
/* edition des liens (liaison du code) : gcc main.o afficher.o -o afficher*/
int main(void)
{
    int tab[DIMENSION] = {10, 20, 30};
    afficher(tab, DIMENSION);
    return EXIT_SUCCESS;
}