#include <stdio.h> 
int main() {
    char str[100]; // declaration d'un tableau de 100 caracteres
    fgets(str, sizeof(str), stdin);  // lire la ligne entiere
    int len = 0;                       //indice
    while (str[len] != '\0') {         // si on n'est pas à la fin du tableau
        if (str[len] != ' '){           // si ce n'est pas un espace
            printf("%c", str[len]);     // afficher
        }
        len++;                            //indice suivant
    }
    return 0;
}