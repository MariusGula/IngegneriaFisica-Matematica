#include <stdio.h>

void invertiArray(int *arr, int n) {
    int *inizio = arr;
    int *fine = arr + n - 1;
    while (inizio < fine) {
        int temp = *inizio;
        *inizio = *fine;
        *fine = temp;
        inizio++;
        fine--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array prima dell'inversione: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    invertiArray(arr, n);

    printf("Array dopo l'inversione: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
