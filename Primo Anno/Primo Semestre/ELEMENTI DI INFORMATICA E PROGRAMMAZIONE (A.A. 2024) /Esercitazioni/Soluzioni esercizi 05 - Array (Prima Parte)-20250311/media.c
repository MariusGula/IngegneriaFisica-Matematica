#include <stdio.h>

int main() {
    int numeri[10];
    int somma = 0;
    float media;

    // Chiedere all'utente di inserire 10 numeri
    printf("Inserisci 10 numeri interi:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
        somma += numeri[i]; // Calcola la somma mentre inserisce i numeri
    }

    // Calcolare la media
    media = somma / 10.0; // Dividere per 10.0 per ottenere un risultato in virgola mobile

    // Stampare la media
    printf("La media degli elementi dell'array è: %.2f\n", media);

    return 0;
}
