#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] >= 'a' && str[len] <= 'z') { // si la lettre est en minuscule
            str[len] = str[len] - ('a' - 'A'); // conversion en majuscule
        }
        else {
            str[len] = str[len]; // si ce n'est pas une lettre, on la garde telle quelle
        }
        len++;
    }
    printf("%s", str);
    return 0;
}