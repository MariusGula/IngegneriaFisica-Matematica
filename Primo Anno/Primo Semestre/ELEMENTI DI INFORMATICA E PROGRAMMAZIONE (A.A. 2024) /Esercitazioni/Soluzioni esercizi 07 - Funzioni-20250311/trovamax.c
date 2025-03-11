#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funzione per trovare il massimo in un array
int trova_max(int array[], int dimensione) {
    int max = array[0];
    for (int i = 1; i < dimensione; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    // Inizializzazione casuale
    srand(time(NULL));

    // Dichiarazione e inizializzazione dell'array con numeri casuali
    int dimensione = 10;
    int array[dimensione];
    for (int i = 0; i < dimensione; i++) {
        array[i] = rand() % 100 + 1; // Genera numeri casuali tra 1 e 100
    }

    // Stampa dell'array generato
    printf("Array generato: [");
    for (int i = 0; i < dimensione; i++) {
        printf("%d", array[i]);
        if (i < dimensione - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Chiamata della funzione trova_max() per calcolare il massimo
    int massimo = trova_max(array, dimensione);

    // Stampa del massimo
    printf("Il massimo è: %d\n", massimo);

    return 0;
}
