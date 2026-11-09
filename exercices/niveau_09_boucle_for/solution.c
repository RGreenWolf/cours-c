#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 1. Somme croissante de 1 à N
    int n;
    printf("Entrez un entier positif N : ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Saisie invalide.\n");
        return 1;
    }

    int somme = 0;
    for (int i = 1; i <= n; i++) {
        somme += i;
    }
    printf("La somme des %d premiers entiers est : %d\n\n", n, somme);

    // 2. Boucle décroissante pour les années bissextiles
    printf("Annees bissextiles entre 3000 et 2950 :\n");
    for (int annee = 3000; annee >= 2950; annee--) {
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
            printf("- %d (bissextile)\n", annee);
        }
    }

    return 0;
}
