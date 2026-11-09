# Explications - Niveau 06

### 1. L'Opérateur Modulo `%`
- `a % b` donne le reste de la division euclidienne de `a` par `b`.
- Si `a % b == 0`, cela signifie que `a` est divisible par `b`.

### 2. Priorité des Opérateurs Logiques
- En C, `&&` est prioritaire sur `||` (comme la multiplication l'est sur l'addition).
- L'expression `(annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)` est ainsi évaluée en deux blocs logiques clairs :
  - Bloc A : les années ordinaires divisibles par 4 mais pas par 100 (ex: 2024).
  - Bloc B : les années de siècle exceptionnelles divisibles par 400 (ex: 1600, 2000, 2400).
