# Explications - Niveau 14

### 1. Pourquoi initialiser `min` et `max` avec `notes[0]` ?
- Si vous initialisez `min = 0`, et que toutes les notes sont positives (ex: 12, 14, 15), votre boucle trouvera que le minimum est 0 alors que personne n'a eu 0 !
- En initialisant `min = notes[0]` et `max = notes[0]`, vous commencez avec une valeur réelle existante du tableau.

### 2. Le Calcul de l'Écart-Type
- L'écart-type mesure la dispersion des notes autour de la moyenne.
- On fait obligatoirement deux passes :
  1. Première passe : calculer la moyenne $\bar{x}$.
  2. Deuxième passe : calculer la somme des carrés des écarts $(x_i - \bar{x})^2$.
- `sqrtf()` de `<math.h>` calcule la racine carrée en simple précision (`float`).
