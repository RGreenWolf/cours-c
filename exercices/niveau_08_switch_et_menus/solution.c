#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char choix;

    printf("Eleve absent ou voulez-vous arreter la saisie ? (A/O/N) : ");
    if (scanf(" %c", &choix) != 1) {
        printf("Erreur de lecture.\n");
        return 1;
    }

    switch (choix) {
        case 'A':
        case 'a':
            printf("Action : Eleve declare ABSENT.\n");
            break;

        case 'O':
        case 'o':
            printf("Action : OUI, arret definitif de la saisie.\n");
            break;

        case 'N':
        case 'n':
            printf("Action : NON, recommencer la saisie de la note.\n");
            break;

        default:
            printf("Erreur : Choix invalide ('%c'). Seules A, O ou N sont acceptees.\n", choix);
            break;
    }

    return 0;
}
