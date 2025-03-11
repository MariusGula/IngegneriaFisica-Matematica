#include <stdio.h>
#include <string.h>

int main() {
    char stringa[101]; // Stringa con massimo 100 caratteri + terminatore '\0'
    int lunghezza, i;

    // Richiede una stringa all'utente
    printf("Inserisci una stringa (max 100 caratteri): ");
    scanf("%100[^\n]", stringa); // Legge fino a 100 caratteri, inclusi spazi

    // Calcola la lunghezza della stringa
    lunghezza = strlen(stringa);

    // Inverte la stringa scambiando i caratteri
    for (i = 0; i < lunghezza / 2; i++) {
        char temp = stringa[i];
        stringa[i] = stringa[lunghezza - i - 1];
        stringa[lunghezza - i - 1] = temp;
    }

    // Stampa la stringa invertita
    printf("Stringa invertita: %s\n", stringa);

    return 0;
}
