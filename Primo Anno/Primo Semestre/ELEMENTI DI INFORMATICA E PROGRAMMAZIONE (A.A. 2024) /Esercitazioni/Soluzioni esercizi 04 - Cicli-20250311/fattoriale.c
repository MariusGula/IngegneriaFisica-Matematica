#include <stdio.h>

int main() {
    int scelta;
    int numero;
    unsigned long risultato = 0;

    do {
        // Visualizza il menu
        printf("1. Calcola il fattoriale\n");
        printf("2. Visualizza risultato\n");
        printf("3. Esci\n");

        // Chiedi all'utente di scegliere un'opzione
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: // Calcola il fattoriale
                printf("Inserisci un numero: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("Errore: il fattoriale non è definito per numeri negativi.\n");
                } else {
                    risultato = 1; // Inizializza il risultato
                    for (int i = 2; i <= numero; i++) {
                        risultato *= i; // Calcola il fattoriale
                    }
                    printf("Fattoriale calcolato.\n");
                }
                break;
            case 2: // Visualizza risultato
                if (risultato > 0) {
                    printf("Il fattoriale di %d è %llu\n", numero, risultato);
                } else {
                    printf("Nessun risultato disponibile. Calcola prima il fattoriale.\n");
                }
                break;
            case 3: // Esci
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Operazione non valida. Riprova.\n");
        }

        printf("\n");

    } while (scelta != 3);

    return 0;
}
