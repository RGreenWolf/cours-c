#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int age = 0;
    float note = 0.0F;
    char groupe = ' ';

    // 1. Saisie d'un entier
    printf("Entrez votre age : ");
    scanf("%d", &age);

    // 2. Saisie d'un flottant
    printf("Entrez votre note (ex: 14.5) : ");
    scanf("%f", &note);

    // 3. Saisie d'un caractere (l'espace avant %c ignore le saut de ligne precedent)
    printf("Entrez votre groupe de TD (A, B, C...) : ");
    scanf(" %c", &groupe);

    // 4. Affichage recapitulatif
    printf("\n=== RECAPITULATIF ===\n");
    printf("Age    : %d ans\n", age);
    printf("Note   : %.2f / 20\n", note);
    printf("Groupe : %c\n", groupe);

    return 0;
}
