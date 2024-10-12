#include <stdlib.h>
#include <stdio.h>
#include "compter.h"

void compter_stats(FILE *input, int *nombre_lignes, int *nombre_mots, int *nombre_caracteres)
{
    *nombre_caracteres = 0;
    *nombre_mots = 0;
    *nombre_lignes = 0;
    enum etat etat = Hors_d_un_mot;

    // Read from the input file stream (which can be stdin or a file)
    for (int c = fgetc(input); c != EOF; c = fgetc(input))
    {
        switch (c)
        {
        case '\n':
            (*nombre_lignes)++;
            // No break, so continue to check other whitespace cases
        case ' ':
        case '\t':
            if (etat == Dans_un_mot)
            {
                (*nombre_mots)++;
                etat = Hors_d_un_mot;
            }
            break;

        default:
            etat = Dans_un_mot;
            break;
        }
        (*nombre_caracteres)++;
    }
}
