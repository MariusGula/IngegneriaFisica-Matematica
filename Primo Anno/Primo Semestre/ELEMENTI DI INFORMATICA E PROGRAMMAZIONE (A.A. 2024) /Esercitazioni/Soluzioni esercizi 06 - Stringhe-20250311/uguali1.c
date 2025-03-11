#include <stdio.h>

int main() {
    char stringa1[51]; // Prima stringa, massimo 50 caratteri + terminatore '\0'
    char stringa2[51]; // Seconda stringa, massimo 50 caratteri + terminatore '\0'
    int sonoUguali = 1; // Flag per verificare se le stringhe sono uguali
    int i = 0;

    // Richiede la prima stringa all'utente
    printf("Inserisci la prima stringa (max 50 caratteri): ");
    scanf("%50s", stringa1);

    // Richiede la seconda stringa all'utente
    printf("Inserisci la seconda stringa (max 50 caratteri): ");
    scanf("%50s", stringa2);

    // Confronto carattere per carattere con ciclo while
    while (sonoUguali && (stringa1[i] != '\0' || stringa2[i] != '\0')) {
        if (stringa1[i] != stringa2[i]) {
            sonoUguali = 0; // Le stringhe sono diverse
        }
        i++;
    }

    // Stampa il risultato
    if (sonoUguali) {
        printf("Le stringhe sono uguali!\n");
    } else {
        printf("Le stringhe sono diverse!\n");
    }

    return 0;
}
