#include <stdio.h>
#include <math.h>

#define NBMAXNOTES 10

int main(void) {
    float notes[NBMAXNOTES] = { 12.5F, 14.0F, 8.5F, 17.0F, 9.5F, 15.0F };
    int nbNotes = 6;

    printf("=== LISTE DES NOTES ===\n");
    for (int i = 0; i < nbNotes; i++) {
        printf("Note %d : %.2f / 20\n", i + 1, notes[i]);
    }

    // 1. Calculs min, max et moyenne
    float min = notes[0];
    float max = notes[0];
    float somme = 0.0F;

    for (int i = 0; i < nbNotes; i++) {
        somme += notes[i];
        if (notes[i] < min) min = notes[i];
        if (notes[i] > max) max = notes[i];
    }

    float moyenne = somme / (float)nbNotes;

    // 2. Calcul de l'écart-type
    float sommeCarres = 0.0F;
    for (int i = 0; i < nbNotes; i++) {
        float ecart = notes[i] - moyenne;
        sommeCarres += ecart * ecart;
    }
    float ecartType = sqrtf(sommeCarres / (float)nbNotes);

    printf("\n=== STATISTIQUES ===\n");
    printf("Moyenne   : %.2f / 20\n", moyenne);
    printf("Note min  : %.2f / 20\n", min);
    printf("Note max  : %.2f / 20\n", max);
    printf("Ecart-type: %.2f\n", ecartType);

    return 0;
}
