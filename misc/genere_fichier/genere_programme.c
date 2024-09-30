#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/* gcc -g -W -Wall -std=c99 genere_prpgramme.c genere_propgramme*/
/* genere_programme essai.c*/
/* make essai */
int main(int argc, char *argv[])
{
    FILE *flot;

    if (argc != 2)
        return EXIT_FAILURE;
    if ((flot = fopen(argv[1], "w")) == NULL)
    {
        fprintf(stderr, "Impossible de créer %s\n", argv[1]);
        return EXIT_FAILURE;
    }
    printf("Construction du fichier %s\n", argv[1]);
    fprintf(flot,
            "#include <stdio.h>\n"
            "#include <stdlib.h>\n\n"
            "int main(void)\n"
            "{\n"
            "    printf(\"fichier %s\\n\");\n"
            "    return EXIT_SUCCESS;\n"
            "}\n",
            argv[1]);
    fclose(flot);
    return EXIT_SUCCESS;
}
