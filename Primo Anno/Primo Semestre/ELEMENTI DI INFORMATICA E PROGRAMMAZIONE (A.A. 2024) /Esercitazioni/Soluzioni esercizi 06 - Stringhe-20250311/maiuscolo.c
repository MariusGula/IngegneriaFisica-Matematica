#include <stdio.h>

int main() {
    char stringa[101]; // Stringa con massimo 100 caratteri + terminatore '\0'
    int i = 0;

    // Richiede una stringa all'utente
    printf("Inserisci una stringa (max 100 caratteri): ");
    scanf("%100[^\n]", stringa); // Legge fino a 100 caratteri, inclusi spazi

    // Converte i caratteri minuscoli in maiuscoli
    while (stringa[i] != '\0') {
        if (stringa[i] >= 'a' && stringa[i] <= 'z') {
            stringa[i] = stringa[i] - ('a' - 'A'); // Conversione in maiuscolo
        }
        i++;
    }

    // Stampa la stringa in maiuscolo
    printf("Stringa in maiuscolo: %s\n", stringa);

    return 0;
}
