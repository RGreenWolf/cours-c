# Niveau 11 - Boucle `do ... while` et Décomposition de Chiffres

## 🎯 Objectif
Utiliser la boucle `do ... while` pour forcer au moins une exécution (idéal pour filtrer une saisie), puis décomposer un nombre entier chiffre par chiffre avec `% 10` et `/ 10`.

## 📝 Énoncé
Dans le TP1 (Exercice 4) :
1. Demandez à l'utilisateur de saisir un entier strictement positif ($N > 0$).
   - Utilisez une boucle `do { ... } while (n <= 0);` pour répéter la question tant que la valeur entrée n'est pas strictement positive.
2. Décomposez le nombre pour afficher chacun de ses chiffres en partant de la droite vers la gauche :
   - Extrayez le dernier chiffre avec le reste modulo 10 : `chiffre = n % 10;`.
   - Retirez ce chiffre du nombre avec la division entière par 10 : `n = n / 10;`.
   - Répétez l'opération dans une boucle jusqu'à ce que le nombre devienne 0.
3. Affichez aussi la somme de tous les chiffres du nombre.
