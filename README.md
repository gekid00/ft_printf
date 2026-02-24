ft_printf

Bibliothèque `ft_printf` — implémentation personnelle d'une fonction d'affichage formaté.

Aperçu
- Fournit `libftprintf.a` compilée via le `Makefile`.

Dépendances
- `gcc`, `make`

Compilation
1. Depuis la racine du projet :

    cd ft_printf
    make

2. L'archive statique `libftprintf.a` sera créée dans le dossier `ft_printf`.

Utilisation simple
- Exemple d'utilisation dans un programme C :

    #include "ft_printf.h"

    int main(void) {
        ft_printf("Hello %s %d\n", "world", 42);
        return 0;
    }

Tests rapides
- Pour tester la compilation :

    make clean && makes