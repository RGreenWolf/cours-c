#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Entrez les 3 cotes du triangle (ex: 3 4 5) : ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Erreur de saisie.\n");
        return 1;
    }

    if (a <= 0.0F || b <= 0.0F || c <= 0.0F) {
        printf("Erreur : tous les cotes doivent etre strictement positifs.\n");
    } else if (a < b + c && b < a + c && c < a + b) {
        printf("Le triangle existe !\n");

        if (a == b && b == c) {
            printf("C'est un triangle equilateral.\n");
        }
    } else {
        printf("Ce triangle est impossible : l'un des cotes est trop grand.\n");
    }

    return 0;
}
