#include <stdio.h>
#include "affiche_caracteres.h"

void 
affiche_caracteres(char c, int nombre_de_fois)
{
    while (nombre_de_fois > 0)
    {
        putchar(c);
        nombre_de_fois--;
    }
}
