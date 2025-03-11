#include <stdio.h>
#include <string.h>

int main() {
    char stringa[101]; // Dichiarazione della stringa, con un carattere extra per il terminatore '\0'
    int conteggioVocali = 0;

    printf("Inserisci una stringa (max 100 caratteri): ");
    fgets(stringa, sizeof(stringa), stdin);

    // Itera attraverso ciascun carattere della stringa
    for (int i = 0; i < strlen(stringa); i++) {
        // Controlla se il carattere è una vocale (sia maiuscola che minuscola)
        if (stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || 
            stringa[i] == 'o' || stringa[i] == 'u' ||
            stringa[i] == 'A' || stringa[i] == 'E' || stringa[i] == 'I' || 
            stringa[i] == 'O' || stringa[i] == 'U') {
            conteggioVocali++;
        }
    }

    printf("Numero di vocali: %d\n", conteggioVocali);

    return 0;
}
