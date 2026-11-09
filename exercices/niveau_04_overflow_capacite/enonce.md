# Niveau 04 - Dépassement de Capacité (Overflow)

## 🎯 Objectif
Comprendre la limite de mémoire d'un entier non signé 16 bits (`unsigned short`, max 65 535) et concevoir un test de garde préventif pour éviter qu'une addition ne déborde.

## 📝 Énoncé
On cherche à calculer la somme des entiers $1 + 2 + 3 + \dots + N$ dans une variable `unsigned short somme = 0`.
1. Demandez à l'utilisateur la valeur de $N$.
2. Dans une boucle, avant chaque addition de la valeur $i$, vérifiez qu'il n'y a aucun risque de dépasser la capacité maximale (`65535`).
3. Si un dépassement risque de se produire, interrompez le calcul et affichez le dernier entier ajouté et la somme obtenue.
4. *Astuce du TP1* : pour tester sans déborder, écrivez `65535 - somme < i` au lieu de `somme + i > 65535`.
