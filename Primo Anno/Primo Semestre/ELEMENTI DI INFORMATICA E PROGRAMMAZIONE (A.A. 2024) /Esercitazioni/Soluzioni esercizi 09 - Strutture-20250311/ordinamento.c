#include <stdio.h>
#include <string.h>

#define MAX_STUDENTI 5

// Definizione della struttura
struct Studente {
    char nome[50];
    int eta;
    float voto;
};

// Funzione di ordinamento (Bubble sort)
void ordinaPerVoto(struct Studente studenti[], int n) {
    struct Studente temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (studenti[j].voto < studenti[j+1].voto) {
                temp = studenti[j];
                studenti[j] = studenti[j+1];
                studenti[j+1] = temp;
            }
        }
    }
}

// Funzione per stampare i dati di un singolo studente
void stampaStudente(struct Studente s) {
    printf("Nome: %s, Età: %d, Voto: %.2f\n", s.nome, s.eta, s.voto);
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
    
    // Ordinamento
    ordinaPerVoto(studenti, MAX_STUDENTI);
    
    // Stampa degli studenti ordinati
    printf("\nStudenti ordinati per voto (dal più alto al più basso):\n");
    for (int i = 0; i < MAX_STUDENTI; i++) {
        stampaStudente(studenti[i]);
    }
    
    return 0;
}
