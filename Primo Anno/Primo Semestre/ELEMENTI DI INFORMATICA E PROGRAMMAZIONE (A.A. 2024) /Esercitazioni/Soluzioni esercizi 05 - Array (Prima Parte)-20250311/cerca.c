#include <stdio.h>

int main() {
    int numeri[8];
    int cercato;
    int trovato = 0; // Variabile per tenere traccia se il numero è stato trovato
    int posizione = -1; // Inizializziamo a -1, che indica "non trovato"

    // Chiedere all'utente di inserire 8 numeri
    printf("Inserisci 8 numeri interi:\n");
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Chiedere all'utente quale numero cercare
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &cercato);

    // Cercare il numero nell'array
    for (int i = 0; i < 8; i++) {
        if (numeri[i] == cercato) {
            trovato = 1; // Se trovato, aggiorniamo la variabile
            posizione = i; // Memorizziamo la posizione
            break; // Uscire dal ciclo non appena trovato
        }
    }

    // Informare l'utente del risultato
    if (trovato) {
        printf("Il numero %d è presente nella posizione %d.\n", cercato, posizione + 1); // +1 per posizione umana
    } else {
        printf("Il numero %d non è presente nell'array.\n", cercato);
    }

    return 0;
}
