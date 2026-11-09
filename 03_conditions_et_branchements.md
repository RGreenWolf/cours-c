# Chapitre 3 : Structures Conditionnelles et Logique Algorithmique

---

## 1. La Structure `if` / `else if` / `else`

```c
if (condition1) {
    // Exécuté si condition1 est vraie
} else if (condition2) {
    // Exécuté si condition1 est fausse ET condition2 est vraie
} else {
    // Exécuté si aucune des conditions précédentes n'est vraie
}
```

> [!IMPORTANT]
> **Règles de bonne pratique :**
> 1. Utilisez **systématiquement des accolades `{}`**, même pour une seule ligne.
> 2. Indentez lisiblement pour refléter l'imbrication des blocs.
> 3. Attention au piège mortel : `if (x == 5)` (comparaison) et non `if (x = 5)` (affectation qui écrase la valeur et vaut toujours vrai !).

---

## 2. Opérateurs Logiques et Évaluation Court-Circuit

- `&&` : ET logique (vrai si les deux côtés sont vrais).
- `||` : OU logique (vrai si au moins un côté est vrai).
- `!` : NON logique (inverse la valeur de vérité).

### Le court-circuit (*short-circuit evaluation*)
- Pour `A && B` : Si `A` est faux, `B` n'est **jamais évalué**.
  - Exemple utile : `if (diviseur != 0 && (total / diviseur) > 10)` protège d'une division par zéro !
- Pour `A || B` : Si `A` est vrai, `B` n'est **jamais évalué**.

---

## 3. L'Instruction `switch` / `case`

L'instruction `switch` teste l'égalité stricte d'une variable de type **entier** ou **caractère** (`int`, `char`, `short`) avec différentes valeurs constantes.

```c
char choix;
scanf(" %c", &choix);

switch (choix) {
    case 'A':
    case 'a':
        printf("Action : Absent\n");
        break; // break est OBLIGATOIRE sous peine de continuer dans le cas suivant !
    case 'O':
    case 'o':
        printf("Action : Oui, arrêt de la saisie\n");
        break;
    case 'N':
    case 'n':
        printf("Action : Non, continuer\n");
        break;
    default:
        printf("Choix non reconnu.\n");
        break;
}
```

---

## 4. Algorithme de Permutation (*Swap*) et Tri de 3 Valeurs

### Permutation de deux variables
Pour échanger les contenus de deux variables, une variable intermédiaire temporaire est requise :
```c
int temp = a;
a = b;
b = temp;
```

### Ordonner 3 valeurs $A, B, C$ dans l'ordre croissant
Pour ordonner 3 valeurs sans structures complexes, 3 comparaisons suffisent :
```c
void ordonner3(int* a, int* b, int* c) {
    int temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
}
```
*Une fois ordonnées de sorte que $A \le B \le C$, il devient trivial de tester des conditions d'encombrement ou de gabarit (ex: TP1 bagage avion : hauteur, largeur, profondeur).*

---

## 5. Cas Algorithmiques Classiques d'Examen

### A. Année Bissextile
Une année est bissextile si elle est divisible par 4, sauf les années de siècle qui doivent être divisibles par 400.
```c
bool estBissextile(int annee) {
    return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
}
```

### B. Inégalité Triangulaire
Un triangle existe si et seulement si chaque côté est strictement inférieur à la somme des deux autres :
```c
bool triangleExiste(double a, double b, double c) {
    return (a < b + c) && (b < a + c) && (c < a + b);
}
```

### C. Équation du Second Degré : $ax^2 + bx + c = 0$
```c
#include <math.h>

void resoudreSecondDegre(double a, double b, double c) {
    if (a == 0.0) {
        if (b == 0.0) {
            printf(c == 0.0 ? "Infinité de solutions\n" : "Aucune solution\n");
        } else {
            printf("Équation de degré 1 : solution unique x = %lf\n", -c / b);
        }
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions réelles : x1 = %.3lf, x2 = %.3lf\n", x1, x2);
    } else if (delta == 0) {
        double x0 = -b / (2 * a);
        printf("Une racine double : x0 = %.3lf\n", x0);
    } else {
        printf("Pas de solution réelle (solutions complexes).\n");
    }
}
```

### D. Validation d'un Numéro de Sécurité Sociale (TD PRG1031 Exo 6)
Un numéro de sécurité sociale français complet se compose de 13 chiffres suivis d'une clé de contrôle à 2 chiffres.
- **1er chiffre** : Sexe (1 = Homme, 2 = Femme).
- **Chiffres 2 et 3** : Deux derniers chiffres de l'année de naissance.
- **Chiffres 4 et 5** : Mois de naissance (01 à 12).
- **Chiffres 6 et 7** : Département de naissance.
- **Chiffres 8 à 10** : Code commune.
- **Chiffres 11 à 13** : Numéro d'ordre.
- **Clé de contrôle (2 chiffres)** : Calculée par la formule mathématique :
  $$\text{Clé} = 97 - (\text{Numéro 13 chiffres} \pmod{97})$$

```c
#include <stdio.h>
#include <stdbool.h>

bool verifierCleSecu(unsigned long long numero13, int cleSaisie) {
    int cleCalculee = (int)(97 - (numero13 % 97));
    return cleCalculee == cleSaisie;
}
```
*Remarque : Un numéro à 13 chiffres dépasse la capacité d'un `int` (32 bits, max 2.1 milliards) et d'un `unsigned int` (max 4.2 milliards). Il faut impérativement utiliser le type `unsigned long long` (64 bits, format `%llu`).*

