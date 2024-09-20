// chatgpt,tentei e tentei e tava sem tempo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ano 365

int main() {
    float temperaturas[ano], somaTemperaturas = 0.0;
    float menorTemp, maiorTemp, mediaAnual;
    int i, diasInferioresMedia = 0;

    srand(time(NULL));


    for (i = 0; i < ano; i++) {

        temperaturas[i] = (rand() % 510) / 10.0 - 10;
        somaTemperaturas += temperaturas[i];
        printf("Dia %d: %.1fC\n", i + 1, temperaturas[i]);

    }

    menorTemp = temperaturas[0];
    maiorTemp = temperaturas[0];

    for (i = 1; i < ano; i++) {
        if (temperaturas[i] < menorTemp) {
            menorTemp = temperaturas[i];
        }
        if (temperaturas[i] > maiorTemp) {
            maiorTemp = temperaturas[i];
        }
    }

    mediaAnual = somaTemperaturas / ano;

    for (i = 0; i < ano; i++) {
        if (temperaturas[i] < mediaAnual) {
            diasInferioresMedia++;
        }
    }

    printf("Menor temperatura do ano: %.1fC\n", menorTemp);
    printf("Maior temperatura do ano: %.1fC\n", maiorTemp);
    printf("Temperatura média anual: %.1fC\n", mediaAnual);
    printf("Número de dias com temperatura inferior à média anual: %d dias\n", diasInferioresMedia);

    return 0;
}
