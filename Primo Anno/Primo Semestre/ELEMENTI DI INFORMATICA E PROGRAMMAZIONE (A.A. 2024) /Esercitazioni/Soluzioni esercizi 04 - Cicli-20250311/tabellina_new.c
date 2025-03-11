#include <stdio.h>

int main() {
    int righe, colonne;

    // Chiedi all'utente di inserire il numero di righe e colonne
    printf("Inserisci il numero di righe (numeri di cui calcolare la tabellina): ");
    scanf("%d", &righe);
    printf("Inserisci il numero di colonne (fino a che numero si calcola la tabellina): ");
    scanf("%d", &colonne);

    printf("\nTabelline da 1 a %d fino a %d:\n\n", righe, colonne);

    // Stampa le tabelline
    for (int i = 1; i <= righe; i++) {
        for (int j = 1; j <= colonne; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
