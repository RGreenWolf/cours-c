#include <stdio.h>

int main(void) {
    // 1. Constante float (le F évite la conversion implicite depuis double)
    const float Pi = 3.14F;
    printf("Pi avec 2 decimales : %.2f\n", Pi);
    printf("Pi avec 6 decimales : %.6f\n\n", Pi);

    // 2. Priorite operatoire
    printf("2 + 3 * 5   = %d (multiplication prioritaire)\n", 2 + 3 * 5);
    printf("(2 + 3) * 5 = %d (parentheses prioritaires)\n\n", (2 + 3) * 5);

    // 3. Division entiere vs division flottante
    printf("Division entiere  10 / 20     = %d\n", 10 / 20);
    printf("Division flottante 10.0 / 20.0 = %.2f\n", 10.0F / 20.0F);

    return 0;
}
