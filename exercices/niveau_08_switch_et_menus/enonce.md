# Niveau 08 - Instruction Switch / Case et Menu Utilisateur

## 🎯 Objectif
Utiliser l'instruction `switch` pour gérer proprement des choix multiples sur des caractères ou des entiers.

## 📝 Énoncé
Dans le TP2 (Exercice 3), lors de la saisie des notes, si une note invalide est saisie, le programme demande :
`"Eleve absent ou voulez-vous arreter la saisie ? (A/O/N) : "`

Écrivez un programme qui :
1. Demande à l'utilisateur de saisir une lettre parmi `'A'`, `'O'` ou `'N'` (insensible à la casse, minuscules autorisées).
2. Traite le choix à l'aide d'un `switch` :
   - `'A'` ou `'a'` : affiche `"Action : Eleve declare ABSENT"`
   - `'O'` ou `'o'` : affiche `"Action : OUI, arret definitif de la saisie"`
   - `'N'` ou `'n'` : affiche `"Action : NON, recommencer la saisie de la note"`
   - Autre caractère (`default`) : affiche `"Erreur : Choix invalide"`
3. Comporte obligatoirement les instructions `break` à chaque fin de clause.
