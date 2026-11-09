# Chapitre 5 : Tableaux Statiques 1D et Algorithmes

---

## 1. Principes des Tableaux Statiques 1D

Un tableau est une suite contiguë de données du même type allouée en mémoire fixe à la compilation.
- **Indices** : vont toujours de `0` à `N - 1`.
- **Taille fixe** : la dimension maximale est définie avec une directive `#define`.
- **Taille logique** : on maintient toujours une variable (ex: `nbNotes`) pour savoir combien de cases sont réellement utilisées.

```c
#define NBMAXNOTES 30

float notes[NBMAXNOTES]; // Déclaration statique
int nbNotes = 0;         // Nombre d'éléments réellement présents
```

> [!CAUTION]
> En C, il n'y a **aucun contrôle d'indice à l'exécution**. Écrire dans `notes[30]` dépasse la mémoire allouée (*buffer overflow*).

---

## 2. Algorithmes Statistiques

### A. Moyenne, Minimum et Maximum
```c
float somme = 0.0F;
float min = notes[0];
float max = notes[0];

for (int i = 0; i < nbNotes; i++) {
    somme += notes[i];
    if (notes[i] < min) min = notes[i];
    if (notes[i] > max) max = notes[i];
}

float moyenne = (nbNotes > 0) ? (somme / nbNotes) : 0.0F;
```

### B. Écart-Type (*Standard Deviation*)
$$\sigma = \sqrt{\frac{1}{N} \sum_{i=0}^{N-1} (x_i - \bar{x})^2}$$

```c
#include <math.h>

float sommeDiffCarre = 0.0F;
for (int i = 0; i < nbNotes; i++) {
    float diff = notes[i] - moyenne;
    sommeDiffCarre += diff * diff;
}
float ecartType = sqrtf(sommeDiffCarre / nbNotes);
```

---

## 3. Décalages : Insertion et Suppression

### Insertion d'une valeur à l'indice `pos` (décalage vers la droite)
On commence **impérativement par la fin** pour ne pas écraser les données :
```c
for (int i = nbNotes; i > pos; i--) {
    notes[i] = notes[i - 1]; // Pousse vers la droite
}
notes[pos] = nouvelleValeur;
nbNotes++;
```

### Suppression d'une valeur à l'indice `pos` (tassement vers la gauche)
On commence à `pos` et on avance vers la droite :
```c
for (int i = pos; i < nbNotes - 1; i++) {
    notes[i] = notes[i + 1]; // Écrase l'élément en ramenant le suivant
}
nbNotes--;
```

---

## 4. Tri à Bulles et Tri par Tableau d'Index Miroir

Le tri à bulles compare deux cases consécutives et les échange si elles sont dans le mauvais ordre.

### Le tri miroir (TP2) : préserver les données originales
Pour classer les étudiants sans mélanger leurs notes d'origine, on crée un tableau miroir `index` :
```c
int index[NBMAXNOTES];
for (int i = 0; i < nbNotes; i++) index[i] = i;

for (int i = 0; i < nbNotes - 1; i++) {
    for (int j = 0; j < nbNotes - 1 - i; j++) {
        // Comparaison des notes réelles pointées par les indices
        if (notes[index[j]] < notes[index[j + 1]]) {
            // On permute UNIQUEMENT les indices !
            int tmp = index[j];
            index[j] = index[j + 1];
            index[j + 1] = tmp;
        }
    }
}
// Affichage ordonné : notes[index[0]] est la meilleure note
```

---

## 5. Cas Particulier : Bitmap 32x32 représenté en Tableau 1D d'Entiers (TP2 Exo 4)

Un dessin ou écran 32x32 **n'utilise pas un tableau 2D**, mais un tableau 1D de 32 entiers 32 bits :
```c
int bitmap[32]; // 32 entiers = 32 lignes de 32 bits (1024 pixels au total)
```
- Ligne $y$ : `bitmap[y]`
- Colonne $x$ : bit en position $x$ dans `bitmap[y]`.
- Rotation de 90° horaire : le point $(x, y)$ de la nouvelle image provient de $(y, 31 - x)$ dans l'image initiale.

