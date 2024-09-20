#include <stdio.h>
#define max 10


int main () {
    int vet[max];
    int i, x,o;
    for ( i = 0; i < max; i++){
        printf("digite o valor %d:",i+1);
        scanf("%d", &vet[i]);

    }
    printf("digite o valor da multiplicaçao: ");
    scanf("%d", &x);

    for ( o = 0; o < max; o++){
        vet[o] = vet[o] * x;
    }
    printf("valor do vetor agora é %d:\n", x);
    for (o =0; o <max; o++){
        printf("%d\n",vet[o]);
    }


    return 0;
}
