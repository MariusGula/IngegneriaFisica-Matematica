#include <stdio.h>

int main() {
    int numeri[5];
    int somma = 0;

    // Chiedere all'utente di inserire 5 numeri
    printf("Inserisci 5 numeri interi:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Calcolare la somma degli elementi
    for (int i = 0; i < 5; i++) {
        somma += numeri[i];
    }

    // Stampare la somma
    printf("La somma dei numeri inseriti è: %d\n", somma);

    return 0;
}
