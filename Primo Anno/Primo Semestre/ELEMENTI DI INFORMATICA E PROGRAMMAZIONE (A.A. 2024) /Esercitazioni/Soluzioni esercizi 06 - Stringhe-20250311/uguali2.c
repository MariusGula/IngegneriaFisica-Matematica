#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[51]; // Prima stringa, massimo 50 caratteri + terminatore '\0'
    char stringa2[51]; // Seconda stringa, massimo 50 caratteri + terminatore '\0'

    // Richiede la prima stringa all'utente
    printf("Inserisci la prima stringa (max 50 caratteri): ");
    scanf("%s", stringa1); // Limita l'input a 50 caratteri

    // Richiede la seconda stringa all'utente
    printf("Inserisci la seconda stringa (max 50 caratteri): ");
    scanf("%s", stringa2); // Limita l'input a 50 caratteri

    // Confronta le due stringhe
    if (strcmp(stringa1, stringa2) == 0) {
        printf("Le stringhe sono uguali!\n");
    } else {
        printf("Le stringhe sono diverse!\n");
    }

    return 0;
}
