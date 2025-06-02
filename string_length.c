
#include <stdio.h>
int main() {
    char str[100]; //declaration du tableaut
    fgets(str, sizeof(str), stdin); // lire la ligne entière
    int len = 0;
    int count = -1;
    while (str[len] != '\0') { // non à la fin de la chaîne
        if (str[len] != ' ') { // different de espace
            count++;
        }
        len++;
    }
    printf("Longueur de la chaîne : %d\n", count);
    return 0;
}
