# Chapitre 6 : Macros Préprocesseur, Fonctions et Pointeurs

---

## 1. Directives `#define` et Macros Paramétrées

Le préprocesseur C effectue un remplacement textuel brut **avant** la compilation.

### Piège fondamental de la macro
Dans le TP2 Exercice 1 :
```c
#define carre(x) x * x
```
Si on appelle `carre(5 + 1)` :
- Le préprocesseur remplace textuellement par : `5 + 1 * 5 + 1`
- Selon la priorité opératoire, la multiplication prime : `5 + (1 * 5) + 1` = `5 + 5 + 1 = 11` (au lieu de $6^2 = 36$ !).

> [!IMPORTANT]
> **Règle absolue d'écriture d'une macro :**
> Toujours parenthéser chaque paramètre ET l'expression globale entière :
> ```c
> #define carre(x) ((x) * (x))
> ```
> `carre(5 + 1)` devient `((5 + 1) * (5 + 1))` = `6 * 6 = 36`.

---

## 2. Fonctions en Langage C

### Structure d'une fonction
```c
// Prototype (déclaration)
double calculerMoyenne(const float tab[], int taille);

// Définition (implémentation)
double calculerMoyenne(const float tab[], int taille) {
    if (taille <= 0) return 0.0;
    double somme = 0.0;
    for (int i = 0; i < taille; i++) {
        somme += tab[i];
    }
    return somme / taille;
}
```

---

## 3. Introduction aux Pointeurs et Passage par Adresse

En C, le passage d'argument dans une fonction se fait **toujours par valeur** (une copie locale est créée dans la mémoire de la fonction).

### Problème : le passage par valeur ne modifie pas l'original
```c
void mauvaisSwap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
} // 'a' et 'b' locaux sont détruits ici : les variables de l'appelant restent inchangées !
```

### Solution : passage par adresse avec pointeur
Pour qu'une fonction puisse modifier une variable appartenant à l'appelant, elle doit recevoir son **adresse en mémoire** :

```c
// 'ptrA' et 'ptrB' reçoivent l'adresse de variables entières
void swap(int* ptrA, int* ptrB) {
    int tmp = *ptrA; // Accède à la valeur pointée (* : déréférencement)
    *ptrA = *ptrB;
    *ptrB = tmp;
}

int main(void) {
    int x = 10, y = 20;
    swap(&x, &y); // On passe les adresses grâce à l'opérateur &
    // x vaut maintenant 20, y vaut 10 !
    return 0;
}
```

### Synthèse des symboles `&` et `*`
| Symbole | Nom | Utilisation | Exemple |
| :---: | :--- | :--- | :--- |
| `&` | Opérateur d'adresse | Récupère l'adresse mémoire d'une variable | `&x` donne l'adresse de `x` (ex: pour `scanf` ou `swap`) |
| `*` (déclaration) | Pointeur | Déclare une variable destinée à stocker une adresse | `int* p;` signifie `p` est un pointeur vers un entier |
| `*` (instruction) | Déréférencement | Lit ou écrit dans la case mémoire pointée | `*p = 42;` modifie la case pointée par `p` |

### Application dans le TP2 (`writeBit`)
```c
int writeBit(int* n, int pos) {
    int decalage = 31 - pos;
    *n = *n | (1 << decalage); // Modifie directement l'entier original de l'appelant
    return *n;
}
```
Appel : `writeBit(&valeur, 0);`
