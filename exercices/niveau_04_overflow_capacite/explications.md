# Explications - Niveau 04

### Le Piège du Débordement (*Overflow*)
Un `unsigned short` peut stocker des entiers de `0` à `65535`.
- Si `somme` vaut `65530` et que vous ajoutez `10`, le résultat mathématique est `65540`.
- En mémoire 16 bits, les bits de poids fort sont perdus, et la variable "boucle" à $65540 - 65536 = 4$ !
- Si vous écriviez `if (somme + 10 > 65535)`, le calcul `somme + 10` donnerait `4`, et le test dirait à tort que `4 > 65535` est FAUX !
- **La solution infaillible** : transformer l'inéquation en soustraction :
  $$\text{somme} + i > MAX \iff MAX - \text{somme} < i$$
  Comme $MAX \ge \text{somme}$, la soustraction ne peut jamais déborder.
