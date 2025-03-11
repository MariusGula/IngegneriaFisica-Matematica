#include <stdio.h>

// Dichiarazione della funzione somma_array()
int somma_array(int array[], int dimensione) {
    int somma = 0;
    for (int i = 0; i < dimensione; i++) {
        somma += array[i];
    }
    return somma;
}

int main() {
    // Dichiarazione e inizializzazione dell'array
    int array[5] = {3, 5, 7, 2, 8};
    int dimensione = 5;

    // Chiamata della funzione somma_array() e calcolo della somma
    int somma = somma_array(array, dimensione);

    // Stampa dell'array e della somma
    printf("Array: [");
    for (int i = 0; i < dimensione; i++) {
        printf("%d", array[i]);
        if (i < dimensione - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Somma degli elementi: %d\n", somma);

    return 0;
}
