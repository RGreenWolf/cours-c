#include <stdio.h>

// Macro correctement parenthésée
#define carre(x) ((x) * (x))

// Échange de deux variables par pointeurs
void echanger(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Positionne à 1 le bit en position pos (0 = MSB, 31 = LSB)
int writeBit(int* n, int pos) {
    if (pos >= 0 && pos < 32 && n != NULL) {
        int decalage = 31 - pos;
        *n |= (1 << decalage);
    }
    return (n != NULL) ? *n : 0;
}

int main(void) {
    // 1. Test de la macro
    printf("carre(5)     = %d\n", carre(5));
    printf("carre(5 + 1) = %d\n\n", carre(5 + 1)); // Vaut bien 36

    // 2. Test du swap par pointeur
    int x = 10, y = 20;
    printf("Avant swap : x = %d, y = %d\n", x, y);
    echanger(&x, &y);
    printf("Apres swap : x = %d, y = %d\n\n", x, y);

    // 3. Test de writeBit (TP2 Exo 4b)
    int registre = 0x00000000;
    printf("Registre initial : 0x%08X\n", registre);
    writeBit(&registre, 0); // Active le bit 0 (bit de poids fort MSB)
    printf("Apres writeBit(&registre, 0) : 0x%08X\n", registre);

    return 0;
}
