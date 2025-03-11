#include <stdio.h>

void modificaValore(int *x) {
    *x = 20;
}

int main() {
    int n = 5;
    printf("Prima della modifica: n = %d\n", n);
    modificaValore(&n);
    printf("Dopo la modifica: n = %d\n", n);
    return 0;
}
