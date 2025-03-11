#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funzione per invertire l'array
void inverti_array(int array[], int dimensione) {
    int temp;
    for (int i = 0; i < dimensione / 2; i++) {
        temp = array[i];
        array[i] = array[dimensione - 1 - i];
        array[dimensione - 1 - i] = temp;
    }
}

int main() {
    // Inizializzazione casuale
    srand(time(NULL));

    // Dichiarazione e inizializzazione dell'array con numeri casuali
    int dimensione = 8;
    int array[dimensione];
    for (int i = 0; i < dimensione; i++) {
        array[i] = rand() % 100 + 1; // Genera numeri casuali tra 1 e 100
    }

    // Stampa dell'array originale
    printf("Array generato: [");
    for (int i = 0; i < dimensione; i++) {
        printf("%d", array[i]);
        if (i < dimensione - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Chiamata della funzione inverti_array() per invertire l'array
    inverti_array(array, dimensione);

    // Stampa dell'array invertito
    printf("Array invertito: [");
    for (int i = 0; i < dimensione; i++) {
        printf("%d", array[i]);
        if (i < dimensione - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
