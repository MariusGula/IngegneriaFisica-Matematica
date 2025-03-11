#include <stdio.h>

int main() {
    int array1[5], array2[5];
    int prodotto_scalare = 0;

    // Chiedere all'utente di inserire il primo array
    printf("Inserisci 5 numeri per il primo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Chiedere all'utente di inserire il secondo array
    printf("Inserisci 5 numeri per il secondo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calcolare il prodotto scalare
    for (int i = 0; i < 5; i++) {
        prodotto_scalare += array1[i] * array2[i];
    }

    // Stampare il risultato
    printf("Il prodotto scalare dei due array è: %d\n", prodotto_scalare);

    return 0;
}
