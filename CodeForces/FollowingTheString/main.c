// Autor: Lucas Gabriel Fontes da Silva

#include <stdio.h>
#include <string.h>

int main () {

    int t = 0;
    scanf("%d", &t); // recebe a o número de testes

    for (int i = 0; i < t; i++) {

        int n = 0;
        scanf("%d", &n); // recebe o tamanho da String

        int letraAtual = 97; // letra 'a' na tabela ascii
        int numeros[n]; // armazenará a String (aqui, por enquanto, tratada como um vetor de int)
        char string[n+1]; // armazenará a resposta final (palavra rastreada)

        for (int aux = 0; aux < n; aux++) { // lê todos os valores do vetor
            scanf("%d", &numeros[aux]);
        }

        for (int aux = 0; aux < n; aux++) {

            if (numeros[aux] == 0) { // se o valor é 0, significa que uma nova letra deve ser adicionada

                string[aux] = letraAtual;
                letraAtual++; // incrementa 1 no valor da letra da tabela ascii

                for (int aux2 = aux + 1; aux2 < n; aux2++) { // percorre toda a string para frente, a fim de preencher as letras na sequência correta

                    if (numeros[aux2] == numeros[aux] + 1) {
                        string[aux2] = string[aux];
                        numeros[aux]++;
                        numeros[aux2] = -2; // atribue-se -2 para essa posição não interferir em outros testes
                    }

                }

                numeros[aux] = -2; // atribue-se -2 para essa posição não interferir em outros testes

            }

        }

        string[n] = '\0'; // Completo o vetor de char com o elemento de término

        printf("%s\n", string); // imprimo a resposta, finalmente. HAHA!

    }

    return 0;

}