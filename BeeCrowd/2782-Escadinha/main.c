#include <stdio.h>
#include <math.h>

void preenchevetor (int V[], int t) {
    for (int i = 0; i < t; i++) {
        scanf("%d", &V[i]);
        while (V[i] < -pow(10, 6) || (V[i] > pow(10, 6))) {
            scanf("%d", &V[i]);
        }
    }
}

int escadinhas (int V[], int t, int testesub[]) {
    if (t == 1) {
        return 1;
    }
    int escadas = 0;
    for (int i = 0; i < t - 1; i++ ) {
        testesub[i] = V[i + 1] - V[i];
    }
    int teste;
    for (int i = 0; i < t - 1; i++) {
        if (i == 0) {
            teste = testesub[i];
            escadas += 1;
        } else {
            if (testesub[i] != teste) {
                teste = testesub[i];
                escadas += 1;
            }
        }
    }
    return escadas;
}

int main() {
    int N;
    scanf("%d", &N);
    while ((N < 1) || (N > 1000)) {
        scanf("%d", &N);
    }
    int V[N], testesub[N - 1];
    preenchevetor(V, N);
    printf("%d\n", escadinhas(V, N, testesub));
    return 0;
}