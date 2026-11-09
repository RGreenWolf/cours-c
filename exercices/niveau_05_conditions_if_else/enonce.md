# Niveau 05 - Conditions `if` / `else` et Inégalité Triangulaire

## 🎯 Objectif
Utiliser les structures conditionnelles `if`, `else if`, `else` et les opérateurs logiques de comparaison.

## 📝 Énoncé
Dans le TD PRG1031 (Exercice 4), on cherche à savoir si 3 longueurs réelles $A, B, C$ peuvent former un triangle.
Un triangle existe si et seulement si chaque côté est strictement inférieur à la somme des deux autres :
- $A < B + C$
- $B < A + C$
- $C < A + B$

Écrivez un programme qui :
1. Demande les 3 côtés $A, B, C$ à l'utilisateur.
2. Vérifie d'abord si les longueurs sont strictement positives ($> 0$).
3. Si oui, teste si le triangle peut exister et affiche `"Le triangle existe"` ou `"Ce triangle est impossible"`.
4. Si le triangle existe, vérifie en plus s'il est équilatéral ($A == B$ et $B == C$).
