# Niveau 12 - Représentation Binaire et Opérateurs Bit à Bit

## 🎯 Objectif
Comprendre la représentation interne binaire d'un entier 32 bits et tester chaque bit avec les opérateurs de décalage (`>>`) et de masquage (`&`).

## 📝 Énoncé
Dans le TP2 (Exercice 2), on manipule un entier 32 bits non signé valant `2868838400` en décimal, soit `0xAAFF0000` en hexadécimal.
1. Affichez la taille en octets de cet entier à l'aide de `sizeof(valeur)`.
2. Affichez le nombre de bits utilisés ($4 \times 8 = 32$ bits).
3. À l'aide d'une boucle `for (int bit = 0; bit < 32; bit++)` :
   - Testez l'état du bit numéro `bit` en commençant par le bit de poids faible (bit 0).
   - Affichez pour chaque bit son état `ON` (s'il vaut 1) ou `OFF` (s'il vaut 0) avec un alignement soigné sur 2 caractères (`%2d`).
