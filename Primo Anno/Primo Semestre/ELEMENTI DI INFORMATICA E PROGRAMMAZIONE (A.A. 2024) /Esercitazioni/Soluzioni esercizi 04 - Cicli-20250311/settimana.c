#include <stdio.h>

int main() {
    int giorno;

    do {
        // Chiedi all'utente di inserire un numero
        printf("Inserisci un numero da 1 a 7 (0 per uscire): ");
        scanf("%d", &giorno);

        // Determina il giorno della settimana
        switch (giorno) {
            case 1:
                printf("Lunedì\n");
                break;
            case 2:
                printf("Martedì\n");
                break;
            case 3:
                printf("Mercoledì\n");
                break;
            case 4:
                printf("Giovedì\n");
                break;
            case 5:
                printf("Venerdì\n");
                break;
            case 6:
                printf("Sabato\n");
                break;
            case 7:
                printf("Domenica\n");
                break;
            case 0:
                printf("Uscita.\n");
                break;
            default:
                printf("Numero non valido. Riprova.\n");
        }

        printf("\n");

    } while (giorno != 0);

    return 0;
}
