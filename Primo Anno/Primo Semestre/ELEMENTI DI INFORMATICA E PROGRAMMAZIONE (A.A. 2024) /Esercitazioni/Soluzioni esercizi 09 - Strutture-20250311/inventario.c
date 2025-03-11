#include <stdio.h>
#include <string.h>

#define MAX_PRODOTTI 3

// Definizione della struttura
struct Prodotto {
    char nome[50];
    float prezzo;
    int quantita;
};

// Funzione per stampare i dettagli di un prodotto
void stampaProdotto(struct Prodotto p) {
    printf("Nome: %s, Prezzo: %.2f, Quantità: %d\n", p.nome, p.prezzo, p.quantita);
}

int main() {
    struct Prodotto inventario[MAX_PRODOTTI];
    
    // Acquisizione dei dati
    for (int i = 0; i < MAX_PRODOTTI; i++) {
        printf("Prodotto %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", inventario[i].nome);
        printf("Prezzo: ");
        scanf("%f", &inventario[i].prezzo);
        printf("Quantità: ");
        scanf("%d", &inventario[i].quantita);
    }
    
    // Stampa dell'inventario
    printf("\nInventario:\n");
    for (int i = 0; i < MAX_PRODOTTI; i++) {
        stampaProdotto(inventario[i]);
    }
    
    return 0;
}
