#include <stdio.h>

void levetor (int V[], int t) {
    for (int i = 0; i < t; i++) {
        scanf("%d", &V[i]);
    }
}

void trocavetor (int V[], int t) {
    int a = t - 1, aux;
    for (int i = 0; i < t/2; i++) {
        aux = V[a];
        V[a] = V[i];
        V[i] = aux;
        a -= 1; 
    }
}

void mostravetor (int V[], int t) {
    for (int i = 0; i < t; i++) {
        printf("N[%d] = %d\n", i, V[i]);
    }
}

int main() {
    int N[20];
    levetor(N, 20);
    trocavetor(N, 20);
    mostravetor(N, 20);
    return 0;
}