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

    return 0;
}