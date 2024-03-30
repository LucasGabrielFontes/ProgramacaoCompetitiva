#include <stdio.h>
#include <string.h>

#define TAM 50

typedef struct {
    char nome[TAM];
    float preco;
} produto;

typedef struct {
    char nome[TAM];
    int quantidade;
} cliente;

int main () {
    int N;
    scanf("%d", &N);
    while (N <= 0) {
        scanf("%d", &N);
    }
    for (int i = 1; i<= N; i++) {
        int M;
        scanf("%d", &M);
        while (M <= 0) {
            scanf("%d", &M);
        }
        produto vendas[M];
        for (int ii = 0; ii < M; ii++) {
            scanf("%s %f", vendas[ii].nome, &vendas[ii].preco);
        }
        int P;
        scanf("%d", &P);
        while (P <= 0) {
            scanf("%d", &P);
        }
        cliente compras[P];
        for (int ii = 0; ii < P; ii++) {
            scanf("%s %d", compras[ii].nome, &compras[ii].quantidade);
            int teste = 0;
            for (int aux = 0; aux < M; aux++) {
                if (strcmp(compras[ii].nome, vendas[aux].nome) == 0) {
                    teste += 1;
                }
            }
            while (teste == 0) {
                scanf("%s %d", compras[ii].nome, &compras[ii].quantidade);
            }
        }
        float total = 0;
        for (int a = 0; a < P; a++) {
            for (int b = 0; b < M; b++) {
                if (strcmp(compras[a].nome, vendas[b].nome) == 0) {
                    total += (compras[a].quantidade * vendas[b].preco);
                    break;
                }
            }
        }
        printf("R$ %.2f\n", total);
    }
    return 0;
}