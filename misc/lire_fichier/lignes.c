#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s fichier\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *flot = fopen(argv[1], "r");

    if (flot == NULL)
    {
        fprintf(stderr, "Impossible de lire %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    char tampon[256];
    int i = 1;

    while (true)
    {
        // if (fgets(tampon, sizeof tampon, flot) == NULL)
        //     break;

        // fscanf: Le format %s lit une chaîne de caractères jusqu'à rencontrer un espace, un tabulation ou un retour à la ligne.
        // Si vous avez des lignes contenant des espaces, fscanf ne lira que le premier mot de chaque ligne.
        // Si vous souhaitez lire toute la ligne y compris les espaces, vous pouvez utiliser fgets à la place
        if (fscanf(flot, "%s", tampon) == EOF)
            break;

        printf("%04d: %s\n", i++, tampon);
    }
    fclose(flot);

    return EXIT_SUCCESS;
}
