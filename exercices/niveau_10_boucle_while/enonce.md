# Niveau 10 - Boucle `while` et Événement d'Arrêt (Capital Placé)

## 🎯 Objectif
Utiliser la boucle `while` pour répéter un calcul jusqu'à ce qu'un événement calculé se produise (nombre d'itérations inconnu au départ).

## 📝 Énoncé
Dans le TD PRG1041 (Exercice 4), on place une somme d'argent à un certain taux d'intérêt annuel capitalisable (les intérêts s'ajoutent au capital chaque année).
Chaque année :
$$\text{Capital}_{nouveau} = \text{Capital}_{precedent} \times \left(1 + \frac{\text{taux}}{100}\right)$$

Écrivez un programme qui :
1. Demande le montant initial du capital (ex: `1000.0` euros) et le taux d'intérêt annuel en % (ex: `2.5`).
2. Calcule la valeur cible correspondant au double du capital initial ($2 \times \text{Capital}$).
3. À l'aide d'une boucle `while`, calcule et affiche année par année l'évolution du capital tant qu'il n'a pas atteint le double de sa valeur.
4. Affiche le nombre total d'années nécessaires pour doubler le capital.
