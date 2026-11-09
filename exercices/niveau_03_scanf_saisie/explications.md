# Explications - Niveau 03

### 1. Pourquoi le `&` est obligatoire avec `scanf` ?
- En C, une fonction ne peut pas modifier une variable si on lui passe seulement sa valeur.
- Pour que `scanf` puisse écrire dans la mémoire de `age`, on doit lui donner son **adresse mémoire**. L'opérateur `&age` signifie « à l'adresse de age ».
- Si vous oubliez le `&` (`scanf("%d", age)`), le programme plante avec un crash de type *Segmentation Fault*.

### 2. L'espace avant ` %c`
- Quand vous tapez un chiffre puis la touche Entrée, le caractère `\n` reste dans le tampon clavier.
- Le format ` %c` (avec un espace avant) demande à `scanf` d'ignorer les espaces et retours à la ligne résiduels.
