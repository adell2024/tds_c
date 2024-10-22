#include <stdio.h>

// Définition de la constante
#define INTENSITE_MAX 50

// Définition de l'énumération pour la représentation de l'intensité
enum intensiteRepresentation
{
    ENTIERE,
    NORMALISEE
};

// Définition de l'union intensite
union intensiteValeur
{
    unsigned short repr_entiere; // Représentation entière
    float repr_normalisee;       // Représentation normalisée
};

// Définition de la structure intensite
struct intensite
{
    enum intensiteRepresentation type; // Type de représentation
    union intensiteValeur valeur;      // Valeur de l'intensité
};

int main()
{
    struct intensite i; // Déclaration de la structure
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
        scanf("%hu", &i.valeur.repr_entiere);

        // Vérifier si la valeur est dans les limites
        if (i.valeur.repr_entiere > INTENSITE_MAX)
        {
            printf("La valeur doit être inférieure ou égale à %d.\n", INTENSITE_MAX);
        }
        else
        {
            // Calculer la valeur normalisée
            i.valeur.repr_normalisee = (float)i.valeur.repr_entiere / INTENSITE_MAX;
            i.type = NORMALISEE; // Définir le type de représentation
        }
    }
    else if (choix == 2)
    {
        // Entrer une valeur normalisée
        printf("Entrez une valeur normalisée (0.0 à 1.0): ");
        scanf("%f", &i.valeur.repr_normalisee);

        // Vérifier si la valeur est dans les limites
        if (i.valeur.repr_normalisee < 0.0f || i.valeur.repr_normalisee > 1.0f)
        {
            printf("La valeur doit être comprise entre 0.0 et 1.0.\n");
        }
        else
        {
            // Calculer la valeur entière à partir de la valeur normalisée
            i.valeur.repr_entiere = (unsigned short)(i.valeur.repr_normalisee * INTENSITE_MAX);
            i.type = ENTIERE; // Définir le type de représentation
        }
    }
    else
    {
        printf("Choix invalide.\n");
        return 1; // Terminer le programme en cas de choix invalide
    }

    // Affichage de la valeur de l'intensité en fonction du type de représentation
    if (i.type == ENTIERE)
    {
        printf("Valeur de l'intensité (entière): %u\n", i.valeur.repr_entiere);
        
    }
    else if (i.type == NORMALISEE)
    {
        printf("Valeur de l'intensité (normalisée): %.2f\n", i.valeur.repr_normalisee);
       
    }

    return 0;
}
