#include <stdio.h>

#define MAX_STUDENTI 5

// Definizione della struttura
struct Studente {
    char nome[50];
    int eta;
    float voto;
};

// Funzione per calcolare la media dei voti
float calcolaMedia(struct Studente studenti[], int n) {
    float somma = 0;
    for (int i = 0; i < n; i++) {
        somma += studenti[i].voto;
    }
    return somma / n;
}

int main() {
    struct Studente studenti[MAX_STUDENTI];
    
    // Acquisizione dei dati
    for (int i = 0; i < MAX_STUDENTI; i++) {
        printf("Studente %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", studenti[i].nome);
        printf("Età: ");
        scanf("%d", &studenti[i].eta);
        printf("Voto: ");
        scanf("%f", &studenti[i].voto);
    }
    
    // Calcolo della media
    float media = calcolaMedia(studenti, MAX_STUDENTI);
    printf("La media dei voti è: %.2f\n", media);
    
    return 0;
}
