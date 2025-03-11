#include <stdio.h>
#include <stdlib.h> // Per malloc e free

int main() {
    int n; // Dimensione dell'array
    short *array, *p; // Puntatore all'array
	char *t;

    // Chiedi all'utente la dimensione dell'array
    printf("Inserisci la dimensione dell'array: %d", sizeof(int));
    scanf("%d", &n);

    // Allocazione dinamica della memoria
    array = (int *)malloc(n * sizeof(int));

    // Verifica se malloc ha avuto successo
    if (array == NULL) {
        printf("Errore: Memoria non allocata.\n");
        return 1; // Esci con un errore
    }

    // Inserimento dei valori nell'array
    printf("Inserisci %d numeri interi:\n", n);
    for (p=array; p < array+n; p++) {
        *p = rand()%1000;
    }

    // Stampa dei valori dell'array
    printf("Gli elementi dell'array sono:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]); // oppure *(array + i)
    }
    printf("\n");

	
	p = array;
	t = p;
	
	printf("Primo valore %d %d \n", *p, *t);
	
	t++;
	p++;
	printf("Secondo valore %d %d \n", *p, *t);


    // Libera la memoria allocata
    free(array);
    printf("Memoria liberata correttamente.\n");

    return 0;
}
