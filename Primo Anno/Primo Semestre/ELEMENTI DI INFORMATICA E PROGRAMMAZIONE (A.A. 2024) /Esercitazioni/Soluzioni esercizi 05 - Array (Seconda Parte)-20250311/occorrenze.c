#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30

int main() {
    int arr[SIZE];

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Genera l'array di 30 numeri casuali tra 1 e 50
    printf("Array originale:\n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 50 + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Algoritmo Insertion Sort per ordinare l'array in ordine crescente
    for (int i = 1; i < SIZE; i++) {
        int key = arr[i];
        int j = i - 1;

        // Sposta gli elementi dell'array che sono maggiori di 'key' verso destra
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Stampa l'array ordinato
    printf("Array ordinato:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Conta le occorrenze di ogni numero nell'array ordinato
    printf("Conteggio delle occorrenze:\n");
    int count = 1;
    for (int i = 0; i < SIZE; i++) {
        // Se il prossimo elemento è uguale, incrementa il conteggio
        if (i < SIZE - 1 && arr[i] == arr[i + 1]) {
            count++;
        } else {
            // Stampa il numero e il suo conteggio
            printf("Numero %d: %d volte\n", arr[i], count);
            count = 1;  // Resetta il conteggio per il prossimo numero
        }
    }

    return 0;
}
