#include "matrix.h"
#include "matrix_io.h"
#include <stdio.h>
#include <stdlib.h>

void init_matrix(struct matrix *mat, int lines, int cols)
{
    mat->lines = lines;
    mat->cols = cols;

    // Allocation des lignes (tableau de pointeurs)
    mat->m = (int **)malloc(lines * sizeof(int *));

    // Allocation des colonnes pour chaque ligne
    for (int i = 0; i < lines; i++)
    {
        mat->m[i] = (int *)malloc(cols * sizeof(int));
    }
}

void print_matrix(struct matrix *mat)
{
    for (int i = 0; i < mat->lines; i++)
    {
        for (int j = 0; j < mat->cols; j++)
        {
            printf("%d ", mat->m[i][j]);
        }
        printf("\n");
    }
}

void free_matrix(struct matrix *mat)
{
    for (int i = 0; i < mat->lines; i++)
    {
        free(mat->m[i]); // Libère chaque ligne
    }
    free(mat->m); // Libère le tableau de pointeurs
}

// Fonction pour lire la matrice à partir d'un fichier
int read_matrix_from_file(const char *filename, struct matrix *mat)
{
    FILE *flot = fopen(filename, "r");
    if (!flot)
    {
        printf("Impossible d'ouvrir le fichier %s\n", filename);
        return 0;
    }

    // Lire les dimensions de la matrice
    fscanf(flot, "%d %d", &mat->lines, &mat->cols);

    // Initialiser la matrice avec les dimensions lues
    init_matrix(mat, mat->lines, mat->cols);

    // Lire les valeurs de la matrice
    for (int i = 0; i < mat->lines; i++)
    {
        for (int j = 0; j < mat->cols; j++)
        {
            fscanf(flot, "%d", &mat->m[i][j]);
        }
    }

    fclose(flot);
    return 1;
}

// Fonction pour écrire la matrice dans un fichier
