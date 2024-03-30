#include <stdio.h>

int main (void) {

    int quadrados;
    int K;

    scanf("%d %d", &quadrados, &K);

    int valores[quadrados];

    for (int i = 0; i < quadrados; i++) {
        scanf("%d", &valores[i]);
    }

    int soma = 0;
    int somas = 0;
    int inicio = 0;

    while (inicio < quadrados) {
            
        soma += valores[inicio];

        if (soma == K) {
            somas += 1;
        }

        int fim = inicio + 1;

        while (fim < quadrados && soma <= K) {

            soma += valores[fim];

            if (soma == K) {
                somas += 1;
            }

            fim++;

        }

        soma = 0;
        inicio++;

    }

    printf("%d\n", somas);

}