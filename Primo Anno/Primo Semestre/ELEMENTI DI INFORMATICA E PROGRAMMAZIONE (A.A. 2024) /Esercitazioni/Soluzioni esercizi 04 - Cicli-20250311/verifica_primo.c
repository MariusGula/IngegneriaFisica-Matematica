#include <stdio.h>

int main() {
    int numero, i, primo = 1;

    // Chiedi all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Verifica se il numero è primo
    if (numero <= 1) {
        primo = 0; // Numeri minori o uguali a 1 non sono primi
    } else {
		i = 2;
		while(primo == 1 && i * i <= numero){
            if (numero % i == 0) {
                primo = 0; // Se è divisibile per un numero diverso da 1 e se stesso
            }
			i++;
        }
    }

    // Stampa il risultato
    if (primo) {
        printf("Il numero %d è un numero primo.\n", numero);
    } else {
        printf("Il numero %d non è un numero primo.\n", numero);
    }

    return 0;
}
