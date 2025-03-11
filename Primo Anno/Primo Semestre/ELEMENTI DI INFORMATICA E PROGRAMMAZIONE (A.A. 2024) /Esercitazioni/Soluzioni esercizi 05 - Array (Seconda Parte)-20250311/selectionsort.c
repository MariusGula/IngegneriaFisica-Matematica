#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int main() {
    int arr[SIZE];
    
    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Genera l'array di 15 numeri casuali tra 1 e 200
    printf("Array originale:\n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 200 + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Algoritmo Selection Sort per ordinare l'array in ordine decrescente
    for (int i = 0; i < SIZE - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Scambia l'elemento massimo trovato con l'elemento alla posizione i
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }

    // Stampa l'array ordinato
    printf("Array ordinato in ordine decrescente:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}