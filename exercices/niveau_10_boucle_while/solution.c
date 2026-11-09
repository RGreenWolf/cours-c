#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double capitalInitial;
    double taux;

    printf("Entrez le montant initial (ex: 1000) : ");
    if (scanf("%lf", &capitalInitial) != 1 || capitalInitial <= 0) {
        printf("Capital invalide.\n");
        return 1;
    }

    printf("Entrez le taux d'interet annuel en %% (ex: 2.5) : ");
    if (scanf("%lf", &taux) != 1 || taux <= 0) {
        printf("Taux invalide.\n");
        return 1;
    }

    double capital = capitalInitial;
    double capitalCible = 2.0 * capitalInitial;
    int annee = 0;

    printf("\nObjectif a atteindre : %.2lf euros\n", capitalCible);

    // Boucle conditionnelle : on s'arrête dès que capital >= capitalCible
    while (capital < capitalCible) {
        annee++;
        capital = capital * (1.0 + taux / 100.0);
        printf("An %2d : %.2lf euros\n", annee, capital);
    }

    printf("\nLe capital a double au bout de %d ans (Montant final : %.2lf euros).\n", annee, capital);

    return 0;
}
