# Explications - Niveau 08

### 1. Pourquoi utiliser `switch` au lieu de multiples `if / else if` ?
- `switch` teste directement l'égalité stricte d'une variable entière ou caractère (`char`).
- Il rend le code plus lisible et plus rapide à exécuter lorsqu'il y a plus de deux choix possibles.

### 2. Le Rôle Fondamental du `break`
- En C, si vous omettez `break` à la fin d'un `case`, l'exécution continue bêtement dans le `case` suivant (c'est le phénomène de *fallthrough*).
- On exploite volontairement cette propriété pour regrouper `'A'` et `'a'` :
  ```c
  case 'A':
  case 'a':
      // Exécuté si choix == 'A' OU choix == 'a'
      break;
  ```
