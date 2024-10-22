#include <stdio.h>

// Définition de la structure article
struct article
{
    int numero;
    int qte;
    float prix;
};

// Fonction pour afficher les détails d'un article
void afficherArticle(struct article a)
{
    printf("Article numéro: %d\n", a.numero);
    printf("Quantité: %d\n", a.qte);
    printf("Prix unitaire: %.2f\n", a.prix);
}

// Fonction pour calculer le prix total de l'article (quantité * prix unitaire)
float calculerTotal(struct article a)
{
    return a.qte * a.prix;
}

int main()
{
    // Déclaration d'une variable article
    struct article a1;

    // Initialisation des champs de l'article
    a1.numero = 101;
    a1.qte = 5;
    a1.prix = 12.50;

    // Afficher les détails de l'article
    afficherArticle(a1);

    // Calculer et afficher le prix total
    float total = calculerTotal(a1);
    printf("Prix total: %.2f\n", total);

    return 0;
}
