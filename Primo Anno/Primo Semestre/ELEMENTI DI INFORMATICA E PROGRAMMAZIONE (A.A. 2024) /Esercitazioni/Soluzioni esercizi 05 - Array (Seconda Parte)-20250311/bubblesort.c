#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    
    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Genera l'array di 10 numeri casuali tra 1 e 100
    printf("Array originale:\n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Algoritmo Bubble Sort per ordinare l'array
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Stampa l'array ordinato
    printf("Array ordinato:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
