# Chapitre 2 : Binaire, Hexadécimal et Opérations Bit à Bit

---

## 1. Représentation des Nombres Entiers

### Les bases usuelles
- **Base 10 (décimale)** : chiffres de `0` à `9`.
- **Base 2 (binaire)** : bits `0` ou `1`. Préfixe standard : `0b...` (ex: `0b1010` = 10).
- **Base 16 (hexadécimale)** : chiffres `0-9` puis lettres `A-F` (A=10, B=11, C=12, D=13, E=14, F=15). Préfixe en C : `0x...` (ex: `0x0A` = 10).
  - Chaque chiffre hexadécimal correspond exactement à un bloc de 4 bits (un *quartet* ou *nibble*).
  - Exemple : `0xAAFF0000` = `1010 1010 1111 1111 0000 0000 0000 0000` (32 bits).

### Puissances de 2 à connaître par cœur
| n | 2^n | n | 2^n |
| :--- | :--- | :--- | :--- |
| **0** | 1 | **8** | 256 |
| **1** | 2 | **10** | 1024 (1 Kio) |
| **2** | 4 | **15** | 32 768 |
| **3** | 8 | **16** | 65 536 (64 Kio) |
| **4** | 16 | **24** | 16 777 216 (16 Mio) |
| **7** | 128 | **31** | 2 147 483 648 |

### Calcul du nombre de bits requis
- Pour une valeur entière non signée $V$ : trouver le plus petit $k$ tel que $V < 2^k$. $k$ est le nombre minimal de bits.
- Pour une valeur signée : ajouter 1 bit pour le bit de signe (codage en complément à 2).

---

## 2. Opérateurs Bit à Bit en Langage C

> [!WARNING]
> Ne jamais confondre les opérateurs logiques booléens (`&&`, `||`, `!`) qui évaluent des vérités conditionnelles et renvoient 0 ou 1, avec les opérateurs bit à bit (`&`, `|`, `^`, `~`) qui s'appliquent en parallèle sur chaque bit binaire !

| Opérateur | Nom | Description | Exemple binaire | Résultat |
| :---: | :--- | :--- | :--- | :--- |
| `&` | ET bit à bit | Bit à 1 si les 2 bits valent 1 | `1100 & 1010` | `1000` |
| `\|` | OU bit à bit | Bit à 1 si au moins un bit vaut 1 | `1100 \| 1010` | `1110` |
| `^` | OU exclusif (XOR) | Bit à 1 si les bits sont différents | `1100 ^ 1010` | `0110` |
| `~` | NON (Complément) | Inverse tous les bits (0 devient 1, 1 devient 0) | `~00001111` | `11110000` |
| `<< k` | Décalage à gauche | Décale les bits de $k$ crans vers la gauche (équivaut à $\times 2^k$) | `00000101 << 2` | `00010100` (5 x 4 = 20) |
| `>> k` | Décalage à droite | Décale les bits de $k$ crans vers la droite (équivaut à $\div 2^k$) | `00010100 >> 2` | `00000101` (20 / 4 = 5) |

---

## 3. Masques et Manipulation de Bits

Un **masque** binaire permet d'isoler, allumer ou éteindre un bit spécifique à l'aide d'une puissance de 2 : `1 << pos`.

### Convention des positions (selon l'énoncé de TP/TD)
- **Convention A (classique hardware)** : position 0 = bit de poids faible (LSB, tout à droite), position 31 = bit de poids fort (MSB, tout à gauche).
- **Convention B (indexation depuis la gauche)** : position 0 = bit de poids fort (MSB, tout à gauche), position 31 = bit de poids faible (LSB, tout à droite).
  - Pour passer de cette position `pos` (0 à 31) au décalage matériel : `decalage = 31 - pos`.

### Lire la valeur d'un bit (`readBit`)
```c
#include <stdbool.h>

// Renvoie true si le bit à la position pos (0 pour MSB, 31 pour LSB) vaut 1
bool readBit(int n, int pos) {
    int decalage = 31 - pos;
    // Décaler le bit ciblé en position 0 et appliquer le masque 1
    return ((n >> decalage) & 1) == 1;
}
```

### Forcer un bit à 1 (`writeBit`) par pointeur
```c
// Modifie n en positionnant à 1 le bit à 'pos' (0 = MSB, 31 = LSB)
int writeBit(int* n, int pos) {
    int decalage = 31 - pos;
    int masque = 1 << decalage;
    *n = *n | masque; // L'opérateur OU (|) met le bit ciblé à 1 sans toucher aux autres
    return *n;
}
```

### Autres opérations classiques sur les bits
- **Mettre un bit à 0** : `*n = *n & ~(1 << decalage);`
- **Inverser (toggle) un bit** : `*n = *n ^ (1 << decalage);`
- **Tester si un nombre est une puissance de 2** : `(n > 0) && ((n & (n - 1)) == 0);`

---

## 4. Application : Tableaux de Bits (Bitmaps 32x32)

Un écran ou une image monochrome de 32x32 pixels se modélise idéalement par un tableau de 32 entiers 32 bits :
```c
int image[32]; // 32 lignes de 32 colonnes = 1024 pixels au total
```
- Ligne $y$ : `image[y]` est un entier 32 bits.
- Pixel $(x, y)$ : c'est le bit à la position $x$ dans l'entier `image[y]`.
- Lecture du pixel : `readBit(image[y], x)`
- Écriture du pixel : `writeBit(&image[y], x)`
