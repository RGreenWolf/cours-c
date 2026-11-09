#include <stdio.h>

int main(void) {
    unsigned int valeur = 0xAAFF0000; // 2868838400 en décimal

    // a. Nombre d'octets
    printf("Nombre d'octets : %zu octets\n", sizeof(valeur));

    // b. Nombre de bits
    int nbBits = (int)sizeof(valeur) * 8;
    printf("Nombre de bits   : %d bits\n\n", nbBits);

    // c & d. Parcours de chaque bit du LSB (bit 0) au MSB (bit 31)
    for (int bit = 0; bit < nbBits; bit++) {
        // On décale le bit visé en position 0 et on masque avec & 1
        int etat = (valeur >> bit) & 1U;

        printf("bit %2d : %s\n", bit, (etat == 1) ? "ON" : "OFF");
    }

    return 0;
}
