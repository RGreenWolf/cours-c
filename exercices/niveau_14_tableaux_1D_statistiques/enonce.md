# Niveau 14 - Tableaux Statiques 1D et Calculs Statistiques

## 🎯 Objectif
Déclarer et parcourir un tableau statique 1D, calculer la moyenne, trouver la note minimale et maximale, et calculer l'écart-type.

## 📝 Énoncé
Dans le TP2 (Exercice 3) et TD1051 :
1. Définissez la constante `#define NBMAXNOTES 10`.
2. Déclarez un tableau `float notes[NBMAXNOTES]` initialisé avec 6 notes :
   `{ 12.5, 14.0, 8.5, 17.0, 9.5, 15.0 }` et une variable `int nbNotes = 6;`.
3. Parcourez le tableau pour calculer et afficher :
   - La note minimale.
   - La note maximale.
   - La moyenne de la promotion.
4. Parcourez le tableau une seconde fois pour calculer et afficher **l'écart-type** avec `<math.h>` :
   $$\sigma = \sqrt{\frac{1}{N} \sum_{i=0}^{N-1} (notes[i] - moyenne)^2}$$
