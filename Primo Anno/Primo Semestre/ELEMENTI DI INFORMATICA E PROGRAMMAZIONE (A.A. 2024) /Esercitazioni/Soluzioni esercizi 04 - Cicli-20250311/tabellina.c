#include <stdio.h>

int main() {
    int numero;

    do {
        // Chiedi all'utente di inserire un numero
        printf("Inserisci un numero per visualizzare la tabellina (0 per uscire): ");
        scanf("%d", &numero);

        // Se l'utente non inserisce 0, calcola e visualizza la tabellina
        if (numero != 0) {
            printf("Tabellina di %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
            printf("\n");
        }

    } while (numero != 0);

    printf("Uscita dal programma.\n");
    return 0;
}
