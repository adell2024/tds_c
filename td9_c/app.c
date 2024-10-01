#include "matrix.h"
#include "matrix_io.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct matrix mat;

    // Lire la matrice à partir d'un fichier
    if (read_matrix_from_file("matrix.txt", &mat))
    {
        printf("Matrice lue :\n");
        print_matrix(&mat);
    }

    // Libérer la mémoire
    free_matrix(&mat);

    // Allocation dynamique de la structure matrix
    struct matrix *anotherMatrix = (struct matrix *)malloc(sizeof(struct matrix));

    // Initialisation de la matrice avec 3 lignes et 3 colonnes
    init_matrix(anotherMatrix, 3, 3);

    // Initialiser des valeurs d'exemple
    for (int i = 0; i < anotherMatrix->lines; i++)
    {
        for (int j = 0; j < anotherMatrix->cols; j++)
        {
            anotherMatrix->m[i][j] = i * j; // Simple valeur pour tester
        }
    }

    // Afficher la matrice
    printf("Matrice initialisée :\n");
    print_matrix(anotherMatrix);

    // Libérer la mémoire
    free_matrix(anotherMatrix);
    free(anotherMatrix);

    // Initialiser une matrice (exemple avec des valeurs fixes)
    init_matrix(&mat, 3, 4);

    // Remplir la matrice avec des valeurs
    int values[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat.m[i][j] = values[i][j];
        }
    }
    /*
        // Écrire la matrice dans un fichier
        if (write_matrix_to_file("output_matrix.txt", &mat))
        {
            printf("Matrice écrite dans le fichier 'output_matrix.txt'\n");
        }
    */
    // Libérer la mémoire
    free_matrix(&mat);
    return 0;
}