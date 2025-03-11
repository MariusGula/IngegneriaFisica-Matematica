#include <stdio.h>
#include <string.h>

#define MAX_PRODOTTI 3

// Definizione della struttura
struct Prodotto {
    char nome[50];
    float prezzo;
    int quantita;
};

// Funzione per cercare un prodotto per nome
int cercaProdotto(struct Prodotto inventario[], int n, char nome[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(inventario[i].nome, nome) == 0) {
            return i; // Restituisce l'indice del prodotto trovato
        }
    }
    return -1; // Prodotto non trovato
}

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
    
    // Ricerca di un prodotto
    char nomeCercato[50];
    printf("\nInserisci il nome del prodotto da cercare: ");
    scanf("%s", nomeCercato);
    
    int indice = cercaProdotto(inventario, MAX_PRODOTTI, nomeCercato);
    
    if (indice != -1) {
        printf("\nProdotto trovato:\n");
        stampaProdotto(inventario[indice]);
    } else {
        printf("\nProdotto non trovato.\n");
    }
    
    return 0;
}
