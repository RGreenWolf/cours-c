# Cours et Exercices de Langage C

Sommaire simple des cours et du parcours d'exercices progressifs (du débutant au confirmé).

---

## 📚 Sommaire des Cours

- [00 - Guide CMake](00_guide_cmake.md) : Compilation en ligne de commande (`cmake -B build` puis `cmake --build build`).
- [01 - Bases, Types et Entrées/Sorties](01_bases_types_es.md) : Types primitifs, `printf`, `scanf`, cast et prévention d'overflow.
- [02 - Binaire et Opérations Bit à Bit](02_binaire_et_operateurs_bits.md) : `&`, `|`, `^`, `~`, `<<`, `>>`, masques binaires, `readBit` et `writeBit`.
- [03 - Conditions et Branchements](03_conditions_et_branchements.md) : `if/else`, `switch/case`, swap de 3 valeurs, gabarits et années bissextiles.
- [04 - Boucles et Itérations](04_boucles_et_iterations.md) : `for`, `while`, `do..while`, saisie filtrée, décomposition numérique (`% 10`).
- [05 - Tableaux Statiques 1D](05_tableaux_et_algorithmes.md) : Moyenne, écart-type, décalages (insertion/suppression), tri à bulles indexé et bitmap 32 bits.
- [06 - Macros et Pointeurs](06_macros_fonctions_pointeurs.md) : Macros `#define` parenthésées, fonctions et passage par adresse (`int*`, `&var`).

---

## 📝 Parcours d'Exercices en 15 Niveaux

👉 [Accéder au sommaire détaillé des exercices](exercices/README.md)

1. [Niveau 01 - Printf et Commentaires](exercices/niveau_01_printf_commentaires/enonce.md)
2. [Niveau 02 - Types et Calculs](exercices/niveau_02_types_et_calculs/enonce.md)
3. [Niveau 03 - Scanf et Saisie](exercices/niveau_03_scanf_saisie/enonce.md)
4. [Niveau 04 - Overflow de Capacité](exercices/niveau_04_overflow_capacite/enonce.md)
5. [Niveau 05 - Conditions if / else](exercices/niveau_05_conditions_if_else/enonce.md)
6. [Niveau 06 - Logique et Année Bissextile](exercices/niveau_06_bissextile_logique/enonce.md)
7. [Niveau 07 - Swap et Tri de 3 Valeurs](exercices/niveau_07_swap_et_tri3/enonce.md)
8. [Niveau 08 - Switch et Menus](exercices/niveau_08_switch_et_menus/enonce.md)
9. [Niveau 09 - Boucle for](exercices/niveau_09_boucle_for/enonce.md)
10. [Niveau 10 - Boucle while](exercices/niveau_10_boucle_while/enonce.md)
11. [Niveau 11 - Boucle do...while et Chiffres](exercices/niveau_11_boucle_do_while_chiffres/enonce.md)
12. [Niveau 12 - Binaire et Masques](exercices/niveau_12_binaire_et_masques/enonce.md)
13. [Niveau 13 - Macros et Pointeurs](exercices/niveau_13_fonctions_et_pointeurs/enonce.md)
14. [Niveau 14 - Tableaux 1D Statistiques](exercices/niveau_14_tableaux_1D_statistiques/enonce.md)
15. [Niveau 15 - Tableaux 1D Décalages et Tri](exercices/niveau_15_tableaux_decalages_et_tri/enonce.md)

---

## ⚡ Compilation Rapide (CMake)
```powershell
cd cours/exercices
cmake -B build
cmake --build build
```
