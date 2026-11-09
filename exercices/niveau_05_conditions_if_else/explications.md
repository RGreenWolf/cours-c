# Explications - Niveau 05

### 1. Les Opérateurs Logiques
- `&&` (ET logique) : toutes les conditions doivent être vraies en même temps.
- `||` (OU logique) : au moins une des conditions doit être vraie.
- `==` : comparaison d'égalité (attention à ne pas écrire `=` qui est une affectation).

### 2. Le Court-Circuit
Dans `a <= 0 || b <= 0 || c <= 0`, dès que la première condition est vraie (ex: `a <= 0`), le C n'évalue même pas la suite : le résultat global est déjà certain d'être vrai.
