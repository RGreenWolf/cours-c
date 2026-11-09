#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int annee;

    printf("Entrez une annee : ");
    if (scanf("%d", &annee) != 1) {
        printf("Erreur de saisie.\n");
        return 1;
    }

    // Condition bissextile complète :
    // (Divisible par 4 ET non divisible par 100) OU (divisible par 400)
    bool estBissextile = (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);

    if (estBissextile) {
        printf("L'annee %d EST bissextile (366 jours).\n", annee);
    } else {
        printf("L'annee %d N'EST PAS bissextile (365 jours).\n", annee);
    }

    return 0;
}
