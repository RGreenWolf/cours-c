# Niveau 13 - Macros, Fonctions et Passage par Pointeur

## 🎯 Objectif
Comprendre le fonctionnement d'une macro `#define` et savoir écrire des fonctions qui modifient une variable de l'appelant grâce aux pointeurs (`int*`, `&`).

## 📝 Énoncé
Dans le TP2 :
1. **Partie 1 (La macro carrée - Exercice 1 du TP2)** :
   - Définissez `#define carre(x) ((x) * (x))` avec les parenthèses obligatoires.
   - Affichez la valeur de `carre(5)` et de `carre(5 + 1)`.
2. **Partie 2 (La fonction Swap par pointeur)** :
   - Écrivez la fonction `void echanger(int* a, int* b)` qui échange deux variables dans la mémoire de l'appelant.
3. **Partie 3 (La fonction writeBit - Exercice 4 du TP2)** :
   - Écrivez la fonction `int writeBit(int* n, int pos)` qui force à 1 le bit en position `pos` (0 = MSB bit de poids fort, 31 = LSB) dans l'entier `n` passé par pointeur.
   - Formule : `*n = *n | (1 << (31 - pos));`
