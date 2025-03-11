#include <stdio.h>

int main() {
    int numeri[10];
    int massimo;

    // Chiedere all'utente di inserire 10 numeri
    printf("Inserisci 10 numeri interi:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Inizializzare il massimo con il primo elemento
    massimo = numeri[0];

    // Trovare il valore massimo
    for (int i = 1; i < 10; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }

    // Stampare il valore massimo
    printf("Il valore massimo tra i numeri inseriti è: %d\n", massimo);

    return 0;
}
