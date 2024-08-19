#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int H;
    int T;
    int E;
} Cliente;

int main() {

    int N, clientesPerdidos = 0, tempoAtual = 0;

    scanf("%d", &N);

    Cliente *clientes = (Cliente *) malloc (sizeof(Cliente) * N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &clientes[i].H, &clientes[i].T, &clientes[i].E);
    }

    for (int i = 0; i < N; i++) {
        if (tempoAtual < clientes[i].H) {
            tempoAtual = clientes[i].H;
        }
        if (tempoAtual - clientes[i].H > clientes[i].E) {
            clientesPerdidos++;
        } else {
            tempoAtual += clientes[i].T;
        }
    }

    printf("%d\n", clientesPerdidos);
    
    free(clientes);

    return 0;
}