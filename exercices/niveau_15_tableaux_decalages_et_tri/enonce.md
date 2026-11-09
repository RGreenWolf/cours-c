# Niveau 15 - Tableaux 1D : Décalages (Insertion/Suppression) et Tri à Bulles

## 🎯 Objectif
Maîtriser les opérations fondamentales sur un tableau 1D : insérer un élément en décalant vers la droite, supprimer un élément en tassant vers la gauche, et classer les éléments avec le tri à bulles.

## 📝 Énoncé
Dans le TD1051 et le TP2 (Exercice 3) :
On dispose d'un tableau d'entiers de capacité `MAX = 10` contenant 5 valeurs :
`{ 10, 20, 30, 40, 50 }` avec `int taille = 5;`.

1. **Insertion** :
   - Insérez la valeur `25` à l'indice `2`.
   - Pour libérer la place sans écraser les données, décalez les éléments de la droite vers la gauche :
     `for (int i = taille; i > 2; i--) { tab[i] = tab[i-1]; }`
   - Écrivez la valeur `25` en `tab[2]` et incrémentez `taille`. Affichez le tableau.
2. **Suppression** :
   - Supprimez l'élément situé à l'indice `4` en tassant les éléments suivants vers la gauche :
     `for (int i = 4; i < taille - 1; i++) { tab[i] = tab[i+1]; }`
   - Décrémentez `taille`. Affichez le tableau.
3. **Tri à Bulles Décroissant** :
   - À l'aide d'une double boucle imbriquée, triez ce tableau dans l'ordre décroissant (du plus grand au plus petit) par permutations successives. Affichez le tableau final trié.
