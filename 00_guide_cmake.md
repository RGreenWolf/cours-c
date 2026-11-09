# Guide Pratique : Utilisation et Bases de CMake en C

CMake est un générateur de système de construction (*build system generator*). Il ne compile pas directement le code C, mais il génère automatiquement les scripts de compilation adaptés à votre environnement (fichiers pour Visual Studio, Makefiles pour MinGW/GCC, Ninja, etc.).

---

## 1. Pourquoi utiliser CMake ?

- **Portabilité** : le même projet se compile sous Windows, Linux et macOS sans réécrire de configuration.
- **Fin des soucis de chemins** : CMake trouve automatiquement le compilateur (`gcc`, `clang` ou `MSVC` de Visual Studio).
- **Standard industriel** : utilisé dans la quasi-totalité des projets professionnels en C et C++.

---

## 2. Structure Minimale d'un fichier `CMakeLists.txt`

Un fichier `CMakeLists.txt` se place à la racine du projet ou d'un dossier d'exercices.

```cmake
# 1. Version minimale de CMake requise
cmake_minimum_required(VERSION 3.15)

# 2. Nom du projet et langage utilisé (C)
project(ExercicesProgC LANGUAGES C)

# 3. Standard C utilisé (C99 ou C11 recommandé)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 4. Activation des alertes du compilateur (très important en examen !)
if (MSVC)
    add_compile_options(/W4) # Avertissements stricts pour Visual Studio
else()
    add_compile_options(-Wall -Wextra -pedantic) # Avertissements stricts pour GCC/Clang
endif()

# 5. Définition d'un exécutable : nom_cible source.c
add_executable(exo1_bases 01_bases_et_types/solution.c)
```

---

## 3. Les Commandes Clés dans le Terminal (PowerShell)

Toutes les étapes se font en ligne de commande dans le dossier contenant le `CMakeLists.txt` :

### Étape 1 : Configurer le projet (générer les fichiers de build)
```powershell
cmake -B build
```
- `-B build` : indique à CMake de créer un dossier `build/` et d'y stocker tous les fichiers intermédiaires. Votre dossier source reste ainsi propre.

### Étape 2 : Compiler le projet (produire les exécutables)
```powershell
cmake --build build
```
- CMake lance automatiquement le compilateur détecté (Visual Studio ou MinGW GCC).

### Étape 3 : Exécuter le binaire généré
- Si vous compilez avec **MinGW/GCC** :
  ```powershell
  .\build\exo1_bases.exe
  ```
- Si vous compilez avec **Visual Studio (MSVC)** :
  ```powershell
  .\build\Debug\exo1_bases.exe
  ```

### Étape 4 : Nettoyer le projet
Pour tout recommencer à zéro, il suffit de supprimer le dossier `build` :
```powershell
Remove-Item -Recurse -Force build
```

---

## 4. CMake Multi-Cibles pour une Suite d'Exercices

Quand un projet comporte plusieurs exercices, on ajoute simplement une cible `add_executable` pour chaque fichier :

```cmake
add_executable(exo1 01_bases_et_types/solution.c)
add_executable(exo2 02_binaire_et_bits/solution.c)
add_executable(exo3 03_conditions_et_switch/solution.c)
# etc.
```

Pour ne compiler qu'un seul exercice spécifique :
```powershell
cmake --build build --target exo1
```
