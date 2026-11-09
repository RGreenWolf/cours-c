# Parcours d'Exercices en 15 Niveaux Progressifs

Chaque niveau est un dossier autonome contenant :
- `enonce.md` : Consignes simples et exemple d'exécution.
- `solution.c` : Code C commenté, compilable sans avertissement (`gcc -Wall -Wextra`).
- `explications.md` : Explication du fonctionnement et des pièges à éviter.

---

## 🧗 Progression du Débutant au Confirmé

1. [Niveau 01 - Printf et Commentaires](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_01_printf_commentaires) : Découverte de la console, `\n`, `//`, `/* */` et `///`.
2. [Niveau 02 - Types et Calculs](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_02_types_et_calculs) : `int`, `float`, `const float Pi`, priorité opératoire, division entière `10/20`.
3. [Niveau 03 - Scanf et Saisie](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_03_scanf_saisie) : Saisie d'entier, flottant, caractère avec `&` et gestion du tampon.
4. [Niveau 04 - Overflow de Capacité](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_04_overflow_capacite) : Limites `unsigned short` (65 535) et test de garde préventif `MAX - A >= B`.
5. [Niveau 05 - Conditions if / else](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_05_conditions_if_else) : Inégalité triangulaire et opérateurs de comparaison.
6. [Niveau 06 - Logique et Année Bissextile](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_06_bissextile_logique) : Opérateur modulo `%`, opérateurs booléens `&&`, `||`.
7. [Niveau 07 - Swap et Tri de 3 Valeurs](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_07_swap_et_tri3) : Variable temporaire, ordonnancement $D_1 \le D_2 \le D_3$ et gabarit cabine.
8. [Niveau 08 - Switch et Menus](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_08_switch_et_menus) : Traitement de choix utilisateur ('A', 'O', 'N') avec `case`, `break`, `default`.
9. [Niveau 09 - Boucle for](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_09_boucle_for) : Somme croissante de 1 à $N$ et décompte décroissant d'années.
10. [Niveau 10 - Boucle while](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_10_boucle_while) : Calcul événementiel : doublement d'un capital placé avec intérêts.
11. [Niveau 11 - Boucle do...while et Chiffres](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_11_boucle_do_while_chiffres) : Validation de saisie et décomposition d'un entier avec `% 10` et `/ 10`.
12. [Niveau 12 - Binaire et Masques](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_12_binaire_et_masques) : Entier 32 bits, opérateurs `>>`, `&`, et affichage des bits ON/OFF.
13. [Niveau 13 - Macros et Pointeurs](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_13_fonctions_et_pointeurs) : Macro `carre(x)`, échange `swap(&a, &b)` et forçage de bit `writeBit(&n, pos)`.
14. [Niveau 14 - Tableaux 1D Statistiques](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_14_tableaux_1D_statistiques) : Moyenne, min, max, et calcul d'écart-type avec `sqrtf`.
15. [Niveau 15 - Tableaux 1D Décalages et Tri](file:///C:/Users/natha/Documents/code/junia/C/cours/exercices/niveau_15_tableaux_decalages_et_tri) : Insertion à droite, suppression à gauche, et tri à bulles décroissant.

---

## ⚡ Tout Compiler avec CMake
```powershell
cd cours/exercices
cmake -B build
cmake --build build
```
