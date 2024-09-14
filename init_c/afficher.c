#include <stdio.h>
#include "afficher.h"
/* compilation : gcc -c -W -Wall -std=c99 afficher.c*/
/* g=débogage symbolique, W et Wall=messages d'avertissement(utiles lors de mise au point du programme) */
void afficher(int t[3], size_t n)
{
    printf("printf peut afficher ceci:\n");
    printf("--------------------------\n");
    for (size_t i = 0; i < n; i++)
        printf("%d -\n", t[i]);
}