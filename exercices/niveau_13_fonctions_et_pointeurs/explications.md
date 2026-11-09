# Explications - Niveau 13

### 1. Pourquoi des parenthèses dans `#define carre(x) ((x) * (x))` ?
- Si vous écrivez `#define carre(x) x * x`, l'appel `carre(5 + 1)` est remplacé textuellement par `5 + 1 * 5 + 1`.
- Comme `*` est prioritaire, le calcul devient `5 + 5 + 1 = 11` au lieu de $6^2 = 36$ !
- En écrivant `((x) * (x))`, le calcul devient `((5 + 1) * (5 + 1)) = (6 * 6) = 36`.

### 2. Comment fonctionne `writeBit(int* n, int pos)` ?
- `int* n` reçoit l'adresse de la variable `&registre`.
- `*n` permet d'accéder directement au contenu de cette variable pour la modifier en place.
- L'opérateur OU (`|=`) avec le masque `(1 << decalage)` force le bit visé à 1 sans toucher aux autres bits.
