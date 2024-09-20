#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50

int main() {
    int VET[TAMANHO];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        VET[i] = rand() % 100;
    }

    printf("N�meros gerados:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", VET[i]);
    }
    printf("\n");

    printf("N�meros repetidos e suas posi��es:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = i + 1; j < TAMANHO; j++) {
            if (VET[i] == VET[j]) {
                printf("N�mero %d encontrado nas posi��es %d e %d\n", VET[i], i, j);
            }
        }
    }

    return 0;
}
