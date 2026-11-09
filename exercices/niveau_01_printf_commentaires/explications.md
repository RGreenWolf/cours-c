# Explications - Niveau 01

### 1. Les Commentaires en C
- `//` : commentaire mono-ligne. Tout ce qui suit jusqu'à la fin de la ligne est ignoré par le compilateur.
- `/* ... */` : commentaire bloc/multi-lignes. Pratique pour commenter plusieurs lignes de code d'un coup.
- `/// <summary>` : commentaire spécial reconnu par les EDI (Visual Studio) pour afficher une infobulle d'aide au survol de la fonction.

### 2. Le Saut de Ligne `\n`
- `\n` est un caractère d'échappement qui force le curseur de la console à aller au début de la ligne suivante.
- Si on l'oublie, tous les `printf` s'affichent collés les uns à la suite des autres sur la même ligne.
