#include <stdio.h>
#define A 10
#define B 11
int main() {
    int vet[B];
    int i, j, temp, novo;
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
        printf("%d", vet[i]);
    }
    //

    printf("\nnmais um valor: ");
        scanf("%d", &novo);

   for (i = A; i > 0 && vet[i - 1] > novo; i--) {
        vet[i] = vet[i - 1];
    }
    vet[i] = novo;
    printf("Vetor atualizado em ordem crescente:\n");
    for (i = 0; i < B; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}
