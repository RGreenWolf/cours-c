#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int nombre;

    // 1. Boucle do ... while de validation de saisie
    do {
        printf("Entrez un entier strictement positif (ex: 9245) : ");
        scanf("%d", &nombre);
        if (nombre <= 0) {
            printf("Valeur refusee. Recommencez !\n");
        }
    } while (nombre <= 0);

    printf("\nDecomposition de droite a gauche :\n");
    int copie = nombre;
    int sommeChiffres = 0;

    // 2. Décomposition chiffre par chiffre
    while (copie > 0) {
        int chiffre = copie % 10; // Isole le dernier chiffre
        printf("Chiffre : %d\n", chiffre);
        sommeChiffres += chiffre;
        copie /= 10;              // Supprime le dernier chiffre
    }

    printf("Somme des chiffres de %d = %d\n", nombre, sommeChiffres);

    return 0;
}
