# Explications - Niveau 15

### 1. Pourquoi le sens du décalage est-il crucial ?
- **Pour insérer** : vous devez impérativement commencer par la droite (`i = taille` en descendant vers `pos`). Si vous commenciez à gauche, `tab[2] = tab[1]` écraserait immédiatement la valeur de `tab[2]` avant qu'elle n'ait pu être décalée !
- **Pour supprimer** : vous devez impérativement commencer par la gauche (`i = pos` en montant vers `taille - 1`) pour combler le trou en écrasant l'élément à retirer.

### 2. Le Tri à Bulles Décroissant
- La boucle externe `i` répète les passages.
- La boucle interne `j` compare chaque élément adjacent `tab[j]` avec son voisin `tab[j+1]`.
- Si `tab[j] < tab[j+1]`, le plus petit est avant le plus grand : on les permute pour que les plus grands remontent en début de tableau.
