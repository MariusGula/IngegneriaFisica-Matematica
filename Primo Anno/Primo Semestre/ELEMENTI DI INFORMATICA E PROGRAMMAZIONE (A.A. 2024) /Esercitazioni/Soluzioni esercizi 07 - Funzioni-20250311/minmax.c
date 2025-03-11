#include <stdio.h>

// Dichiarazione della funzione max()
int max(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main() {
    int num1, num2, maggiore;

    // Input da parte dell'utente
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Chiamata della funzione max() e salvataggio del risultato
    maggiore = max(num1, num2);

    // Stampa del risultato
    printf("Il maggiore tra i due numeri è: %d\n", maggiore);

    return 0;
}
