#include <stdio.h>
#include <string.h>

int main() {
    char stringa[101]; // Stringa con massimo 100 caratteri + terminatore '\0'
    int palindroma = 1; // Flag per determinare se la stringa è palindroma
    int lunghezza, i;

    // Richiede una stringa all'utente
    printf("Inserisci una stringa (max 100 caratteri): ");
    scanf("%100[^\n]", stringa); // Legge fino a 100 caratteri, inclusi spazi

    // Calcola la lunghezza della stringa
    lunghezza = strlen(stringa);

    // Verifica se la stringa è palindroma
    for (i = 0; i < lunghezza / 2; i++) {
        if (stringa[i] != stringa[lunghezza - i - 1]) {
            palindroma = 0; // La stringa non è palindroma
            break;
        }
    }

    // Stampa il risultato
    if (palindroma) {
        printf("La stringa \"%s\" è palindroma\n", stringa);
    } else {
        printf("La stringa \"%s\" non è palindroma\n", stringa);
    }

    return 0;
}
