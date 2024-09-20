#include <stdio.h>
#define A 10

int main() {
    int vet[A];
    int i, j, temp;
    for (i = 0; i < A; i++) {
        printf("digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < A - 1; i++) {
        for (j = 0; j < A - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
    printf("ordem crescente:\n");
    for (i = 0; i < A; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}
