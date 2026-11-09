# Explications - Niveau 11

### 1. Pourquoi `do ... while` pour la saisie ?
- Avec un `while` classique, la condition est testée **avant** d'entrer. Or la variable n'a pas encore été saisie au clavier !
- La structure `do { ... } while (condition);` garantit que le bloc sera exécuté **au moins une fois**, puis redemandé tant que la saisie est incorrecte.

### 2. Le Duo `% 10` et `/ 10`
En base 10 :
- `9245 % 10 = 5` (le reste de la division par 10 donne exactement le chiffre des unités).
- `9245 / 10 = 924` (la division entière supprime le chiffre des unités en décalant d'un rang vers la droite).
- Ce procédé permet d'analyser n'importe quel entier chiffre par chiffre sans jamais utiliser de chaîne de caractères (`char[]`).
