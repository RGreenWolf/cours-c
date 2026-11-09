# Parcours d'Exercices en 15 Niveaux Progressifs

Chaque niveau est un dossier autonome contenant :
- `enonce.md` : Consignes simples et exemple d'exécution.
- `solution.c` : Code C commenté, compilable sans avertissement (`gcc -Wall -Wextra`).
- `explications.md` : Explication du fonctionnement et des pièges à éviter.

---

## 🧗 Progression du Débutant au Confirmé

1. [Niveau 01 - Printf et Commentaires](niveau_01_printf_commentaires/enonce.md) : Découverte de la console, `\n`, `//`, `/* */` et `///`.
2. [Niveau 02 - Types et Calculs](niveau_02_types_et_calculs/enonce.md) : `int`, `float`, `const float Pi`, priorité opératoire, division entière `10/20`.
3. [Niveau 03 - Scanf et Saisie](niveau_03_scanf_saisie/enonce.md) : Saisie d'entier, flottant, caractère avec `&` et gestion du tampon.
4. [Niveau 04 - Overflow de Capacité](niveau_04_overflow_capacite/enonce.md) : Limites `unsigned short` (65 535) et test de garde préventif `MAX - A >= B`.
5. [Niveau 05 - Conditions if / else](niveau_05_conditions_if_else/enonce.md) : Inégalité triangulaire et opérateurs de comparaison.
6. [Niveau 06 - Logique et Année Bissextile](niveau_06_bissextile_logique/enonce.md) : Opérateur modulo `%`, opérateurs booléens `&&`, `||`.
7. [Niveau 07 - Swap et Tri de 3 Valeurs](niveau_07_swap_et_tri3/enonce.md) : Variable temporaire, ordonnancement $D_1 \le D_2 \le D_3$ et gabarit cabine.
8. [Niveau 08 - Switch et Menus](niveau_08_switch_et_menus/enonce.md) : Traitement de choix utilisateur ('A', 'O', 'N') avec `case`, `break`, `default`.
9. [Niveau 09 - Boucle for](niveau_09_boucle_for/enonce.md) : Somme croissante de 1 à $N$ et décompte décroissant d'années.
10. [Niveau 10 - Boucle while](niveau_10_boucle_while/enonce.md) : Calcul événementiel : doublement d'un capital placé avec intérêts.
11. [Niveau 11 - Boucle do...while et Chiffres](niveau_11_boucle_do_while_chiffres/enonce.md) : Validation de saisie et décomposition d'un entier avec `% 10` et `/ 10`.
12. [Niveau 12 - Binaire et Masques](niveau_12_binaire_et_masques/enonce.md) : Entier 32 bits, opérateurs `>>`, `&`, et affichage des bits ON/OFF.
13. [Niveau 13 - Macros et Pointeurs](niveau_13_fonctions_et_pointeurs/enonce.md) : Macro `carre(x)`, échange `swap(&a, &b)` et forçage de bit `writeBit(&n, pos)`.
14. [Niveau 14 - Tableaux 1D Statistiques](niveau_14_tableaux_1D_statistiques/enonce.md) : Moyenne, min, max, et calcul d'écart-type avec `sqrtf`.
15. [Niveau 15 - Tableaux 1D Décalages et Tri](niveau_15_tableaux_decalages_et_tri/enonce.md) : Insertion à droite, suppression à gauche, et tri à bulles décroissant.

---

## ⚡ Tout Compiler avec CMake
```powershell
cd cours/exercices
cmake -B build
cmake --build build
```
*(Voir le [Guide CMake](../00_guide_cmake.md) pour plus d'informations).*
