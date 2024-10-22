#include <stdio.h>
#include <stdlib.h>

// Déclaration anticipée de la structure article : pourquoi??????
struct article;

// Définition de la structure panier
struct panier
{
    struct article *articles; // Pointeur vers une structure article
    int nombre;               // Nombre d'articles dans le panier
};

// Définition de la structure article
struct article
{
    int numero; // Numéro de l'article
    int qte;    // Quantité de l'article
    float prix; // Prix unitaire de l'article
};

// Fonction pour ajouter un article au panier : complétez la définition de la fonction
void ajouterArticle(struct panier *p, struct article a)
{
    // Réallocation de mémoire pour ajouter un nouvel article
    // Ajouter l'article au panier
    // Incrémenter le nombre d'articles
}

// Fonction pour afficher le contenu du panier
void afficherPanier(struct panier p)
{
    printf("Contenu du panier:\n");
    for (int i = 0; i < p.nombre; i++)
    {
        printf("Article %d: Numéro: %d, Quantité: %d, Prix: %.2f\n",
               i + 1, p.articles[i].numero, p.articles[i].qte, p.articles[i].prix);
    }
}

int main()
{
    // Création et initialisation du panier
    struct panier p;
    p.articles = NULL; // Initialisation du pointeur
    p.nombre = 0;      // Initialisation du nombre d'articles

    // Création et ajout d'articles au panier
    struct article a1 = {101, 5, 12.50};
    struct article a2 = {102, 3, 15.00};

    ajouterArticle(&p, a1);
    ajouterArticle(&p, a2);

    // Afficher le contenu du panier
    afficherPanier(p);

    // Libération de la mémoire
    free(p.articles);

    return 0;
}
