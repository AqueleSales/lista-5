#include <stdio.h>
#define max 20


int main () {
    int vet[max];
    int i, x,o;

    for ( i = 0; i < max; i++){
        printf("digite o valor %d:",i+1);
        scanf("%d", &vet[i]);

    }

    printf("agora na ordem inversa\n");
    for (o = max -1; o >= 0; o--){
        printf("%d\n",vet[o]);
    }


    return 0;
}
