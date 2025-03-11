#include <stdio.h>

void sommaArray(int *a, int *b, int *somma, int n) {
    for (int i = 0; i < n; i++) {
        *(somma + i) = *(a + i) + *(b + i);
    }
}

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int somma[3];
    sommaArray(array1, array2, somma, 3);
    printf("Array somma: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", somma[i]);
    }
    printf("\n");
    return 0;
}
