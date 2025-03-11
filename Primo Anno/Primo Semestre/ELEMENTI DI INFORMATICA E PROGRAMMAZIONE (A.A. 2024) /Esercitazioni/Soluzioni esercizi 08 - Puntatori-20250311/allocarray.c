#include <stdio.h>
#include <stdlib.h> // Per malloc e free

int main() {
    int n; // Dimensione dell'array
    int *array, *p; // Puntatore all'array

    // Chiedi all'utente la dimensione dell'array
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);

    // Allocazione dinamica della memoria
    array = (int *)malloc(n * sizeof(int));

    // Verifica se malloc ha avuto successo
    if (array == NULL) {
        printf("Errore: Memoria non allocata.\n");
        return 1; // Esci con un errore
    }

    // Inserimento dei valori nell'array
    printf("Inserisci %d numeri interi:\n", n);
    for (p=array; p < array+n; p++) {
        printf("Elemento %d: ", ((p-array) + 1));
        scanf("%d", p); // oppure *(array + i)
    }

    // Stampa dei valori dell'array
    printf("Gli elementi dell'array sono:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]); // oppure *(array + i)
    }
    printf("\n");

    // Libera la memoria allocata
    free(array);
    printf("Memoria liberata correttamente.\n");

    return 0;
}
