// Autor: Lucas Gabriel Fontes da Silva
// Propósito do código: encontrar o MDC entre dois números de maneira simplificada
// Obs: contexto da questão é encontrado no BeeCrowd

#include <stdio.h>

int calculaMdc (int a , int b);

int main() {
    int N, F1, F2;
    scanf("%d", &N);
    fflush(stdin);
    for (int i = 0; i < N; i++) { // Repete quantas vezes o usuário determinou
        scanf("%d %d", &F1, &F2);
        fflush(stdin);
        int mdc = calculaMdc(F1, F2);
        printf("%d\n", mdc);
    }     
    return 0;
}

int calculaMdc (int a, int b) { // Utiliza o Algoritmo de Euclides para calcular o MDC de maneira otimizada
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp%b;
    }
    return a;
}