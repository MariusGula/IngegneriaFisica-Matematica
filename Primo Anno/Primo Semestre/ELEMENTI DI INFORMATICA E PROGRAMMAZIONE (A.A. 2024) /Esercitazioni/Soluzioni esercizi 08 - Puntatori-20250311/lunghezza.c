#include <stdio.h>

int lunghezzaStringa(char *str) {
    int lunghezza = 0;
    while (*str != '\0') {
        lunghezza++;
        str++;
    }
    return lunghezza;
}

int main() {
    char str[] = "Ciao";
    printf("La lunghezza della stringa è: %d\n", lunghezzaStringa(str));
    return 0;
}
