#include <stdio.h>

int main() {
    int n, i;
    printf("digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int A[n], B[n], Soma[n];
    printf("digite os valores do vetor A:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("digite os valores do vetor B:\n");
    for (i = 0; i < n; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", &B[i]);
    }
    for (i = 0; i < n; i++) {
        Soma[i] = A[i] + B[i];
    }
    printf("vetor soma (A + B):\n");
    for (i = 0; i < n; i++) {
        printf("soma[%d] = %d\n", i + 1, Soma[i]);
    }

    return 0;
}
