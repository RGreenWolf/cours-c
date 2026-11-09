#include <stdio.h>

#define MAX 10

void afficherTableau(const int tab[], int taille, const char* message) {
    printf("%s : [ ", message);
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("] (Taille: %d)\n", taille);
}

int main(void) {
    int tab[MAX] = { 10, 20, 30, 40, 50 };
    int taille = 5;

    afficherTableau(tab, taille, "1. Tableau initial");

    // 1. Insertion de 25 à l'indice 2 (décalage vers la droite)
    int posIns = 2;
    int valIns = 25;
    if (taille < MAX) {
        for (int i = taille; i > posIns; i--) {
            tab[i] = tab[i - 1]; // On pousse vers la droite en partant de la fin
        }
        tab[posIns] = valIns;
        taille++;
        afficherTableau(tab, taille, "2. Apres insertion de 25 a l'indice 2");
    }

    // 2. Suppression de l'élément à l'indice 4 (tassement vers la gauche)
    int posSuppr = 4;
    if (posSuppr >= 0 && posSuppr < taille) {
        for (int i = posSuppr; i < taille - 1; i++) {
            tab[i] = tab[i + 1]; // On ecrase en ramenant l'element suivant
        }
        taille--;
        afficherTableau(tab, taille, "3. Apres suppression a l'indice 4");
    }

    // 3. Tri à bulles décroissant (du plus grand au plus petit)
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (tab[j] < tab[j + 1]) { // Ordre décroissant
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
    afficherTableau(tab, taille, "4. Apres tri a bulles decroissant");

    return 0;
}
