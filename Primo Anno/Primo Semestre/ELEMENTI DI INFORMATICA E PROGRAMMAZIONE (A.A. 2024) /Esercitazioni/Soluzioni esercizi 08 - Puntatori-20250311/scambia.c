#include <stdio.h>

void scambia(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Prima dello scambio: a = %d, b = %d\n", a, b);
    scambia(&a, &b);
    printf("Dopo lo scambio: a = %d, b = %d\n", a, b);
    return 0;
}
