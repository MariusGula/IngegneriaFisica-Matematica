#include <stdio.h>

int main() {
    int numeri[6];
    int temp;

    // Chiedere all'utente di inserire 6 numeri
    printf("Inserisci 6 numeri:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Invertire l'array
    for (int i = 0; i < 3; i++) { // Solo fino alla metà dell'array
        temp = numeri[i];
        numeri[i] = numeri[5 - i]; // Scambia l'elemento con il corrispondente dall'altra estremità
        numeri[5 - i] = temp;
    }

    // Stampare l'array invertito
    printf("Array invertito:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeri[i]);
    }
    printf("\n");

    return 0;
}
