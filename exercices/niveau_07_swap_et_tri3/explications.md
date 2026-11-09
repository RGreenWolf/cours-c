# Explications - Niveau 07

### 1. Pourquoi le Swap nécessite-t-il une variable temporaire ?
Si vous écrivez :
```c
d1 = d2;
d2 = d1;
```
Dès la première ligne, la valeur initiale de `d1` est écrasée et perdue à jamais ! Les deux variables contiennent alors la valeur de `d2`.
Pour réussir l'échange :
1. On sauvegarde `d1` dans `tmp`.
2. On écrase `d1` avec `d2`.
3. On restaure la valeur sauvegardée dans `d2`.

### 2. L'Algorithme de Tri à 3 Comparaisons
En comparant successivement `(d1, d2)`, puis `(d2, d3)`, puis à nouveau `(d1, d2)` :
- La deuxième comparaison garantit que la plus grande des 3 valeurs se trouve en `d3`.
- La troisième comparaison s'assure que les deux premières sont bien ordonnées.
- Le problème complexe de tester 6 combinaisons possibles est ramené à un simple test d'ordre croissant.
