# Explications - Niveau 09

### 1. Anatomie de la boucle `for`
```c
for (initialisation ; condition_de_continuation ; pas_d_incrementation) {
    // instructions
}
```
1. **Initialisation** (`int i = 1`) : exécutée une seule fois au tout début.
2. **Condition** (`i <= n`) : testée **avant** chaque tour. Si fausse, la boucle s'arrête.
3. **Incrémentation** (`i++` ou `annee--`) : exécutée à la fin de chaque tour avant de re-tester la condition.

### 2. Initialiser l'Accumulateur
- La variable `somme` **doit obligatoirement être initialisée à 0** avant la boucle (`int somme = 0;`).
- En C, une variable non initialisée contient une valeur résiduelle aléatoire présente dans la mémoire vive (*garbage value*).
