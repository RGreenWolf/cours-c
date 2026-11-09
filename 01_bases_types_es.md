# Chapitre 1 : Bases, Types Primitifs et Entrées/Sorties

---

## 1. Structure Minimale d'un Programme en C

```c
#define _CRT_SECURE_NO_WARNINGS // Désactive les avertissements Visual Studio sur scanf/printf
#include <stdio.h>              // Bibliothèque standard d'entrées/sorties
#include <stdlib.h>             // Fonctions utilitaires standards
#include <stdbool.h>            // Type booléen standard (true/false)

int main(void) {
    // Instructions exécutées
    return 0; // 0 indique une exécution réussie au système d'exploitation
}
```

---

## 2. Types de Données Primitifs et Spécificateurs

| Type en C            | Taille usuelle     | Plage de valeurs approx.              | Spécificateur `printf`   | Spécificateur `scanf` |
| :------------------- | :----------------- | :------------------------------------ | :----------------------- | :-------------------- |
| `char`               | 1 octet (8 bits)   | -128 à +127 (ou code ASCII)           | `%c` ou `%d`             | `%c`                  |
| `unsigned char`      | 1 octet (8 bits)   | 0 à 255                               | `%u`                     | `%hhu`                |
| `short`              | 2 octets (16 bits) | -32 768 à +32 767                     | `%d` ou `%hd`            | `%hd`                 |
| `unsigned short`     | 2 octets (16 bits) | 0 à 65 535                            | `%u` ou `%hu`            | `%hu`                 |
| `int`                | 4 octets (32 bits) | -2 147 483 648 à +2 147 483 647       | `%d`                     | `%d`                  |
| `unsigned int`       | 4 octets (32 bits) | 0 à 4 294 967 295                     | `%u` (ou `%x` pour hexa) | `%u`                  |
| `long long`          | 8 octets (64 bits) | env. -9 x 10^18 à +9 x 10^18          | `%lld`                   | `%lld`                |
| `unsigned long long` | 8 octets (64 bits) | 0 à env. 1.8 x 10^19                  | `%llu`                   | `%llu`                |
| `float`              | 4 octets (32 bits) | Simple précision (~7 chiffres sign.)  | `%f` (ex: `%.2f`)        | `%f`                  |
| `double`             | 8 octets (64 bits) | Double précision (~15 chiffres sign.) | `%lf` ou `%f`            | `%lf`                 |
| `bool`               | 1 octet            | `true` (1) ou `false` (0)             | `%d`                     | `%d`                  |

> [!TIP]
> Pour connaître la taille exacte en mémoire d'une variable ou d'un type : utilisez l'opérateur `sizeof(type)` ou `sizeof(variable)` qui renvoie le nombre d'octets.
> Exemple : `printf("Taille de int : %zu octets\n", sizeof(int));`

---

## 3. Déclaration, Constantes et Suffixes

```c
int compteur = 0;              // Initialisation obligatoire pour éviter les valeurs résiduelles en mémoire
const float Pi = 3.14159F;      // Constante float : le suffixe 'F' évite la conversion implicite depuis double
const double E = 2.718281828;   // Constante double précision par défaut
unsigned long long big = 10000000000ULL; // Suffixe ULL pour Unsigned Long Long
```

---

## 4. Entrées/Sorties : `printf` et `scanf`

### Affichage formaté (`printf`)
- Formater les décimales : `%.2f` affiche 2 chiffres après la virgule.
- Aligner en colonnes : `%2d` réserve 2 caractères pour le nombre (ex: ` 8`, ` 9`, `10`).

### Lecture au clavier (`scanf` / `scanf_s`)
- **Règle absolue** : `scanf` a besoin de l'adresse mémoire de la variable pour pouvoir la modifier. On doit impérativement utiliser le symbole `&`.
  ```c
  int age;
  scanf("%d", &age); // Correct (& obligatoire)
  // scanf("%d", age); // ERREUR GRAVE : crash (Segmentation Fault)
  ```
- **Gestion du saut de ligne avec `%c`** :
  Lorsqu'on saisit un chiffre suivi d'un `Entrée`, le caractère `\n` reste dans le tampon. Pour lire un caractère proprement sans consommer l'ancien `\n`, laissez un espace avant le format :
  ```c
  char choix;
  scanf(" %c", &choix); // L'espace ignore les blancs et retours chariot précédents
  ```

---

## 5. Opérateurs Arithmétiques & Conversions

### Division entière vs division réelle
En C, si les deux opérandes sont entiers, la division `/` tronque la partie décimale.
```c
int a = 10, b = 4;
float resultat1 = a / b;         // 10 / 4 = 2 (division entière) -> resultat1 = 2.0F
float resultat2 = (float)a / b;  // Cast explicite : 10.0F / 4 = 2.5F
```

### Modulo `%` (reste de la division euclidienne)
Le modulo ne fonctionne que sur les **entiers**.
```c
int reste = 17 % 5; // 2
```
Utilisations classiques :
- Tester la parité : `if (n % 2 == 0) // n est pair`
- Décomposer les chiffres d'un entier : `dernier_chiffre = n % 10; reste = n / 10;`

---

## 6. Prévention des Dépassements de Capacité (*Overflow*)

Un entier de type `unsigned short` peut aller jusqu'à 65 535 (`USHRT_MAX`).
Si vous testez :
```c
// DANGEREUX :
if (somme + valeur <= 65535) { ... }
// Si somme + valeur dépasse 65535, il y a débordement DANS le calcul avant le test !
```

> [!IMPORTANT]
> **Règle d'or de prévention** : Reformuler la condition par soustraction :
> ```c
> // SÉCURISÉ :
> if (65535 - somme >= valeur) {
>     somme += valeur;
> } else {
>     // Risque de dépassement détecté !
> }
> ```
