#include <stdio.h>

void lematriz (int i, int j, int matriz[][j]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            scanf("%d", &matriz[l][c]);
            while ((matriz[l][c] < -100) || (matriz[l][c] > 100)) {
                scanf("%d", &matriz[l][c]);
            }
        }
    }
}

int encontrasabre (int i, int j, int matriz[][j]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            if (matriz[l][c] == 42) {
                int teste = 0;
                if ((l - 1 >= 0) && (l + 1 <= i - 1) && (c - 1 >= 0) && (c + 1 <= j - 1))  {
                    for (int ll = l - 1; ll <= l + 1; ll++) {
                        for (int cc = c - 1; cc <=  c + 1; cc++) {
                            if (matriz[ll][cc] == 7) {
                            teste += 1;
                            }
                        }
                    }
                    if (teste == 8) {
                    printf("%d %d\n", l + 1, c + 1);
                    return 0;
                }
                }
            }
        }
    }
    printf("0 0\n");
    return 0;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    while ((N < 3) || (N > 1000) || (M < 3) || (M  > 1000)) {
        scanf("%d %d", &N, &M);
    }
    int matriz[N][M];
    lematriz(N, M, matriz);
    encontrasabre(N, M, matriz);
    return 0;
}