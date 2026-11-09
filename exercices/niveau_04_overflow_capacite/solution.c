#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Calcul de 1 + 2 + ... + N\n");
    printf("Entrez la valeur de N : ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Valeur invalide.\n");
        return 1;
    }

    unsigned short somme = 0;
    int i = 1;

    while (i <= n) {
        // Test de garde préventif : si 65535 - somme < i, l'addition va déborder !
        if (USHRT_MAX - somme < (unsigned short)i) {
            printf("\n[ATTENTION] Risque d'overflow ! Calcul arrete a i = %d.\n", i);
            printf("Derniere somme valide stockee : %hu\n", somme);
            return 0;
        }

        somme += (unsigned short)i;
        i++;
    }

    printf("Somme des %d premiers entiers = %hu\n", n, somme);
    return 0;
}
