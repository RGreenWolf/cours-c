# Explications - Niveau 10

### 1. Pourquoi `while` et non `for` ?
- Avec `for`, on doit savoir d'avance combien d'itérations faire (ex: 10 tours).
- Ici, on ne sait pas à l'avance combien d'années seront nécessaires : c'est un **événement** (le capital qui dépasse le seuil cible) qui déclenche l'arrêt.
- `while (capital < capitalCible)` exprime naturellement « tant que l'objectif n'est pas atteint, continue ».

### 2. Condition d'Arrêt
- Dès que `capital >= capitalCible`, la condition devient fausse, la boucle s'arrête immédiatement et le programme enchaîne sur la suite.
