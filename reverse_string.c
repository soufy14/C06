#include <stdio.h>
#include <string.h>

int main() {
    char str[100];


    // Lecture de la chaîne avec fgets (plus sécurisé que gets)
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Supprimer le saut de ligne à la fin si présent
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        printf("Chaîne inversée : ");
        for (int i = len - 1; i >= 0; i--) {
            putchar(str[i]);
        }
        printf("\n");
    }

    return 0;
}
