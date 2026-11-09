# Chapitre 4 : Structures Itératives (Boucles)

---

## 1. Les Trois Types de Boucles et Leurs Usages

| Structure | Pseudo-code | Équivalent C | Quand l'utiliser ? |
| :--- | :--- | :--- | :--- |
| **`for`** | `POUR i ALLANT DE debut A fin FAIRE` | `for (int i = 0; i < n; i++) { ... }` | Lorsque le **nombre d'itérations est connu à l'avance** (parcours de tableau, comptage). |
| **`while`** | `TANT QUE condition FAIRE` | `while (condition) { ... }` | Répétition soumise à un **événement extérieur** ou une condition calculée, pouvant être fausse dès le départ (0 exécution possible). |
| **`do ... while`** | `REPETER ... JUSQU'A condition` | `do { ... } while (condition);` | Lorsque les instructions doivent être **exécutées au moins une fois** (ex: saisie filtrée avec ressaisie). |

---

## 2. Syntaxe et Exemples Comparatifs

### Calcul de la somme des $N$ premiers entiers

```c
int n = 10;
int somme = 0;

// 1. Avec boucle for :
for (int i = 1; i <= n; i++) {
    somme += i;
}

// 2. Avec boucle while :
int i = 1;
somme = 0;
while (i <= n) {
    somme += i;
    i++;
}

// 3. Avec boucle do ... while :
i = 1;
somme = 0;
do {
    somme += i;
    i++;
} while (i <= n);
```

---

## 3. Boucles Décroissantes et Pas Modifié

Pour décompter (ex: afficher les années bissextiles de 3000 à 2000) :
```c
for (int annee = 3000; annee >= 2000; annee--) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        printf("%d est bissextile\n", annee);
    }
}
```

---

## 4. Algorithmes Fondamentaux sur les Boucles

### A. Filtrage et validation de saisie (boucle `do ... while`)
```c
float note;
do {
    printf("Entrez une note entre 0 et 20 : ");
    scanf("%f", &note);
} while (note < 0.0F || note > 20.0F);
```

### B. Décomposition numérique d'un entier en chiffres
Pour décomposer un nombre comme `9245` en chiffres successifs sans chaîne de caractères :
```c
// Méthode de droite à gauche :
int nombre = 9245;
while (nombre > 0) {
    int chiffre = nombre % 10; // Récupère le dernier chiffre
    printf("Chiffre : %d\n", chiffre);
    nombre /= 10;              // Supprime le dernier chiffre
}
```
*Pour afficher de gauche à droite `9-2-4-5` : trouver d'abord la plus grande puissance de 10 inférieure ou égale au nombre, puis diviser par cette puissance en la réduisant successivement.*

### C. Tirage aléatoire et jeu du juste prix
```c
#include <stdlib.h>
#include <time.h>

// Initialiser le générateur avec l'horloge
srand((unsigned int)time(NULL));

// Nombre entre Min et Max inclus :
int min = 1, max = 100;
int secret = min + rand() % (max - min + 1);

int proposition, essais = 0;
do {
    printf("Votre proposition : ");
    scanf("%d", &proposition);
    essais++;

    if (proposition < secret) {
        printf("Trop petit !\n");
    } else if (proposition > secret) {
        printf("Trop grand !\n");
    } else {
        printf("Trouvé en %d essais !\n", essais);
    }
} while (proposition != secret);
```

### D. Calcul d'intérêts composés / doublement du capital
```c
double capital = 1000.0;
double capitalCible = 2 * capital;
double taux = 0.035; // 3.5%
int annee = 0;

while (capital < capitalCible) {
    annee++;
    capital = capital * (1.0 + taux);
}
printf("Le capital double au bout de %d ans (Montant : %.2lf €)\n", annee, capital);
```

---

## 5. Règles de Programmation Structurée
- **Proscrire `goto`** formellement.
- Privilégier une condition de boucle explicite plutôt que des `break` ou `return` sauvages au milieu d'une boucle :
  ```c
  // Préférer un drapeau (flag booléen) :
  bool termine = false;
  while (!termine && compteur < MAX) {
      if (condition_de_fin) {
          termine = true;
      } else {
          compteur++;
      }
  }
  ```
