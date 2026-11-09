cmake_minimum_required(VERSION 3.15)
project(Exercices_C LANGUAGES C)

# Standard C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Options d'avertissements stricts
if (MSVC)
    add_compile_options(/W4 /D_CRT_SECURE_NO_WARNINGS)
else()
    add_compile_options(-Wall -Wextra)
endif()

if (UNIX)
    link_libraries(m)
endif()

# ==========================================
# Les 15 Niveaux Progressifs d'Exercices
# ==========================================
add_executable(niveau_01 niveau_01_printf_commentaires/solution.c)
add_executable(niveau_02 niveau_02_types_et_calculs/solution.c)
add_executable(niveau_03 niveau_03_scanf_saisie/solution.c)
add_executable(niveau_04 niveau_04_overflow_capacite/solution.c)
add_executable(niveau_05 niveau_05_conditions_if_else/solution.c)
add_executable(niveau_06 niveau_06_bissextile_logique/solution.c)
add_executable(niveau_07 niveau_07_swap_et_tri3/solution.c)
add_executable(niveau_08 niveau_08_switch_et_menus/solution.c)
add_executable(niveau_09 niveau_09_boucle_for/solution.c)
add_executable(niveau_10 niveau_10_boucle_while/solution.c)
add_executable(niveau_11 niveau_11_boucle_do_while_chiffres/solution.c)
add_executable(niveau_12 niveau_12_binaire_et_masques/solution.c)
add_executable(niveau_13 niveau_13_fonctions_et_pointeurs/solution.c)
add_executable(niveau_14 niveau_14_tableaux_1D_statistiques/solution.c)
add_executable(niveau_15 niveau_15_tableaux_decalages_et_tri/solution.c)
