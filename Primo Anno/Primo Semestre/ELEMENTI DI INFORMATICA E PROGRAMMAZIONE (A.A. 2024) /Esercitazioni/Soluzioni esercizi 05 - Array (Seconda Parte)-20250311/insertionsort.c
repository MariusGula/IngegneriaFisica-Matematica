#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main() {
    int arr[SIZE];
    int target;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Genera l'array di 20 numeri casuali tra 1 e 500
    printf("Array originale:\n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 500 + 1;
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
    printf("Array ordinato in ordine crescente:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Chiede all'utente di inserire un numero da cercare
    printf("Inserisci un numero da cercare nell'array: ");
    scanf("%d", &target);

    // Ricerca binaria per trovare il numero
    int left = 0;
    int right = SIZE - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = 1;
            printf("Numero %d trovato alla posizione %d.\n", target, mid);
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Numero %d non trovato nell'array.\n", target);
    }

    return 0;
}
