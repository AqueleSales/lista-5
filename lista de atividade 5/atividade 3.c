#include <stdio.h>
int main() {
    int min, pos, i;
    int Q[20];
     for (i = 1; i < 21; i++) {
        printf("Digite um n�mero positivo para a posi��o %d: ", i);
        scanf("%d", &Q[i]);

         while (Q[i] <= 0) {
            printf("N�mero inv�lido! Digite um n�mero positivo para a posi��o %d: ", i);
            scanf("%d", &Q[i]);
        }
     }

     min = Q[0];
     pos = 0;

     for (i = 1; i < 20; i++) {
        if (Q[i] < min) {
            min = Q[i];
            pos = i;
        }
    }

     printf("O menor elemento � %d e ocupa a posi��o %d no vetor.\n", min, pos);
        return 0;
}
