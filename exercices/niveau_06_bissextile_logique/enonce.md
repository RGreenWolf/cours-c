# Niveau 06 - Année Bissextile et Opérateur Modulo (%)

## 🎯 Objectif
Maîtriser l'opérateur modulo (`%`) et combiner plusieurs conditions logiques (`&&`, `||`).

## 📝 Énoncé
Dans le TD PRG1031 (Exercice 2), la règle du calendrier grégorien pour déterminer si une année est bissextile est la suivante :
1. L'année doit être divisible par 4 (`annee % 4 == 0`).
2. Sauf les années de fin de siècle (divisibles par 100 : `annee % 100 == 0`), qui ne sont bissextiles que si elles sont aussi divisibles par 400 (`annee % 400 == 0`).
   - *Exemples* : 2024 et 2000 sont bissextiles. 1900, 1800 et 2023 ne le sont pas.

Écrivez un programme qui :
1. Demande une année à l'utilisateur.
2. Affiche si cette année est bissextile ou non à l'aide d'une seule expression conditionnelle bien parenthésée.
