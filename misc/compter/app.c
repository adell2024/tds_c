
#include <stdlib.h>
#include <stdio.h>
#include "compter.h"
#include "pluriel.h"

int main(void)
{
    int nombre_caracteres, nombre_mots, nombre_lignes;

    // Call the function with stdin as input
    compter_stats(stdin, &nombre_lignes, &nombre_mots, &nombre_caracteres);

    // Print statistics in main
    printf("%d ligne%s - %d mot%s - %d caractère%s\n",
           nombre_lignes, pluriel(nombre_lignes),
           nombre_mots, pluriel(nombre_mots),
           nombre_caracteres, pluriel(nombre_caracteres));

    return EXIT_SUCCESS;
}