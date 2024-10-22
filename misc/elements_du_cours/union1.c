#include <stdio.h>

// Définition de la constante
#define INTENSITE_MAX 50

// Définition de l'union intensite
union intensite
{
    unsigned short repr_entiere; // Représentation entière
    float repr_normalisee;       // Représentation normalisée
};

int main()
{
    union intensite i; // Déclaration de l'union
    int choix;

    // Demander à l'utilisateur de choisir la représentation
    printf("Choisissez la représentation de l'intensité:\n");
    printf("1. Entière (0 à %d)\n", INTENSITE_MAX);
    printf("2. Normalisée (0.0 à 1.0)\n");
    printf("Votre choix: ");
    scanf("%d", &choix);

    if (choix == 1)
    {
        // Entrer une valeur entière
        printf("Entrez une valeur entière: ");
        scanf("%hu", &i.repr_entiere);

        // Vérifier si la valeur est dans les limites
        if (i.repr_entiere > INTENSITE_MAX)
        {
            printf("La valeur doit être inférieure ou égale à %d.\n", INTENSITE_MAX);
        }
        else
        {
            // Calculer la valeur normalisée
            i.repr_normalisee = (float)i.repr_entiere / INTENSITE_MAX;
            printf("Valeur entière: %u\n", i.repr_entiere);
            printf("Valeur normalisée: %.2f\n", i.repr_normalisee);
        }
    }
    else if (choix == 2)
    {
        // Entrer une valeur normalisée
        printf("Entrez une valeur normalisée (0.0 à 1.0): ");
        scanf("%f", &i.repr_normalisee);

        // Vérifier si la valeur est dans les limites
        if (i.repr_normalisee < 0.0f || i.repr_normalisee > 1.0f)
        {
            printf("La valeur doit être comprise entre 0.0 et 1.0.\n");
        }
        else
        {
            // Calculer la valeur entière à partir de la valeur normalisée
            i.repr_entiere = (unsigned short)(i.repr_normalisee * INTENSITE_MAX);
            printf("Valeur normalisée: %.2f\n", i.repr_normalisee);
            printf("Valeur entière correspondante: %u\n", i.repr_entiere);
            // problème: il n y a aucun moyen de connaitre laquelle des différentes représentation possible est utilisé à un moment donné.
        }
    }
    else
    {
        printf("Choix invalide.\n");
    }

    return 0;
}
