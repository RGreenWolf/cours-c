# Explications - Niveau 12

### 1. Hexadécimal et Correspondance Binaire
Chaque caractère hexadécimal représente exactement un paquet de 4 bits (un *quartet*) :
- `A` = `1010`
- `F` = `1111`
- `0` = `0000`
Le nombre `0xAAFF0000` correspond donc à :
`1010 1010  1111 1111  0000 0000  0000 0000`

### 2. Comment tester le bit numéro $k$ ?
1. L'expression `valeur >> bit` fait glisser tous les bits vers la droite de `bit` cases. Le bit numéro `bit` se retrouve tout à droite (en position 0).
2. L'opération `& 1U` (ET logique avec 1) isole ce bit précis et remet tous les autres à 0.
3. Le résultat vaut alors strictement `1` (ON) ou `0` (OFF).
