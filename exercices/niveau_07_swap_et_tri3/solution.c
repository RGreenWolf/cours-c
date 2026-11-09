#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float d1, d2, d3;

    printf("Entrez les 3 dimensions du bagage en cm (ex: 30 50 20) : ");
    if (scanf("%f %f %f", &d1, &d2, &d3) != 3 || d1 <= 0 || d2 <= 0 || d3 <= 0) {
        printf("Dimensions invalides.\n");
        return 1;
    }

    // 1. Ordonner 3 valeurs : d1 <= d2 <= d3 avec variable temporaire
    float tmp;
    if (d1 > d2) { tmp = d1; d1 = d2; d2 = tmp; }
    if (d2 > d3) { tmp = d2; d2 = d3; d3 = tmp; }
    if (d1 > d2) { tmp = d1; d1 = d2; d2 = tmp; }

    printf("Dimensions ordonnees : %.1f x %.1f x %.1f cm\n", d1, d2, d3);

    // 2. Vérification directe du gabarit (25 x 35 x 55 cm)
    if (d1 <= 25.0F && d2 <= 35.0F && d3 <= 55.0F) {
        printf("Resultat : [VALIDE] Bagage accepte en cabine.\n");
    } else {
        printf("Resultat : [NON VALIDE] Bagage trop grand pour la cabine.\n");
    }

    return 0;
}
