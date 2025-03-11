#include <stdio.h>

int main() {
    int numeri[10];
    int pari = 0, dispari = 0;

    // Chiedere all'utente di inserire 10 numeri
    printf("Inserisci 10 numeri interi:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Contare numeri pari e dispari
    for (int i = 0; i < 10; i++) {
        if (numeri[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    // Stampare i risultati
    printf("Numeri pari: %d\n", pari);
    printf("Numeri dispari: %d\n", dispari);

    return 0;
}
