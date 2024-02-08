// Autor: Lucas Gabriel Fontes da Silva
// OBS: esse código ainda não foi aceito pela plataforma CodeForces. Apresenta-se um erro na
// segunda fase de testes. Estou trabalhando nisso.

#include <stdio.h>
#include <string.h>

int main () {

    int t = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int n = 0;
        scanf("%d", &n);

        int letraAtual = 97;
        int numeros[n];
        int vezesRepetidas[n];
        char string[n+1];

        for (int aux = 0; aux < n; aux++) {
            scanf("%d", &numeros[aux]);

            if (numeros[aux] == 0) {
                string[aux] = letraAtual;
                vezesRepetidas[aux] = 0;
                letraAtual++;
            } else {
                for (int cont = 0; cont <= aux; cont++) {
                    if (vezesRepetidas[cont] + 1 == numeros[aux]) {
                        string[aux] = string[cont];
                        vezesRepetidas[cont]++;
                        cont = aux+1;
                    }
                }
            }

        }

        string[n] = '\0';

        printf("%s\n", string);

    }

    return 0;

}