#include <stdio.h>

#define MAX_N 1000 // Definisce il valore massimo per N

int main() {
    int N;
    int isPrimo[MAX_N + 1]; // Array per segnare i numeri non primi

    // Chiedere all'utente di inserire un numero N
    printf("Inserisci un numero N (fino a %d) per trovare i numeri primi fino a N: ", MAX_N);
    scanf("%d", &N);

    // Verifica che N sia nel range valido
    if (N < 2 || N > MAX_N) {
        printf("N deve essere maggiore di 1 e minore o uguale a %d.\n", MAX_N);
        return 1;
    }

    // Inizializzare l'array: 0 significa primo, 1 significa non primo
    for (int i = 0; i <= N; i++) {
        isPrimo[i] = 0; // Tutti i numeri inizialmente considerati primi
    }

    // Implementare il Crivello di Eratostene
    for (int p = 2; p * p <= N; p++) {
        if (isPrimo[p] == 0) { // Se p è ancora considerato primo
            for (int i = p * p; i <= N; i += p) {
                isPrimo[i] = 1; // Segnare i multipli di p come non primi
            }
        }
    }

    // Stampare i numeri primi
    printf("Numeri primi fino a %d:\n", N);
    for (int p = 2; p <= N; p++) {
        if (isPrimo[p] == 0) { // Se p è ancora considerato primo
            printf("%d ", p);
        }
    }
    printf("\n");

    return 0;
}
