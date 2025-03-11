#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    do {
        // Display the menu
        printf("1. Somma\n");
        printf("2. Sottrazione\n");
        printf("3. Moltiplicazione\n");
        printf("4. Divisione\n");
        printf("5. Esci\n");

        // Ask user for choice
        printf("Scegli un'operazione: ");
        scanf("%d", &choice);

        // Process the user's choice
        if (choice >= 1 && choice <= 4) {
            printf("Inserisci il primo numero: ");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Risultato: %.2f\n", result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Risultato: %.2f\n", result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Risultato: %.2f\n", result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Risultato: %.2f\n", result);
                } else {
                    printf("Errore: Divisione per zero non consentita.\n");
                }
                break;
            case 5: // Exit
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Operazione non valida. Riprova.\n");
        }

        printf("\n");

    } while (choice != 5);

    return 0;
}
