#ifndef COMPTER_H
#define COMPTER_H

// Declare the enum etat to represent word states
enum etat { Dans_un_mot, Hors_d_un_mot };



// Function declaration for compter_stats
void compter_stats(FILE *input, int *nombre_lignes, int *nombre_mots, int *nombre_caracteres);

#endif // COMPPTER_H
