# Explications - Niveau 02

### 1. La Division Entière : Le Grand Piège en C
- En C, si les deux nombres autour de `/` sont des entiers (ex: `10` et `20`), le résultat est obligatoirement un **entier**.
- `10 / 20` vaut donc `0` (la partie décimale `.5` est impitoyablement coupée).
- Pour obtenir `0.5`, il faut qu'au moins l'un des nombres soit un nombre à virgule : `10.0F / 20` ou `(float)10 / 20`.

### 2. Le Formatage des Décimales
- `%f` affiche par défaut 6 chiffres après la virgule.
- `%.2f` n'affiche que 2 chiffres après la virgule (avec arrondi automatique).
