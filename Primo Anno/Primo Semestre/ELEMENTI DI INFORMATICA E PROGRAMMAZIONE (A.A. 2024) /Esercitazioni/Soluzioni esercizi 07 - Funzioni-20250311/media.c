#include <stdio.h>

// Funzione per calcolare la media aritmetica
float calcola_media(int array[], int dimensione) {
    int somma = 0;
    for (int i = 0; i < dimensione; i++) {
        somma += array[i];
    }
    return (float)somma / dimensione;
}

int main() {
    int array[5];
    int dimensione = 5;

    // Input da parte dell'utente
    printf("Inserisci 5 numeri:\n");
    for (int i = 0; i < dimensione; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Chiamata della funzione calcola_media()
    float media = calcola_media(array, dimensione);

    // Stampa della media
    printf("La media è: %.2f\n", media);

    return 0;
}
