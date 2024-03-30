#include <stdio.h>

void lematriz (int i, int j, int matriz[][j]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            scanf("%d", &matriz[l][c]);
            while ((matriz[l][c] < 0) || (matriz[l][c] > 100000)) {
                scanf("%d", &matriz[l][c]);
            }
        }
    }
}

int analisamatrizescada (int i, int j, int matriz[][j]) {
    for (int l = 0; l < i; l++) {
        int teste0 = 0;
        for (int c = 0; c < j; c++) {
            if (matriz[l][c] != 0) {
                for (int linha = l + 1; linha < i; linha++) {
                    for (int coluna = 0; coluna <= c; coluna++) {
                        if (matriz[linha][coluna] != 0) {
                            printf("N\n");
                            return 0;
                        }
                    }
                }
                c = j;
            } else {
                teste0 += 1;
            }
        }
        if (teste0 == j) {
            for (int linha = l + 1; linha < i; linha++) {
                for (int coluna = 0; coluna < j; coluna++) {
                    if (matriz[linha][coluna] != 0) {
                        printf("N\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("S\n");
    return 0;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    while ((N < 1) || (N > 500) || (M < 1) || (M > 500)) {
        scanf("%d %d", &N, &M);
    }
    int matriz[N][M];
    lematriz(N, M, matriz);
    analisamatrizescada(N, M, matriz);
    return 0;
}