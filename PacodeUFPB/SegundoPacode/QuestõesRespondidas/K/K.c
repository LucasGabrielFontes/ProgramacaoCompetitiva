#include <stdio.h>

int main () {
    int k=0; //Remover após testes
    int linhas, colunas;
    int sub_m=0;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i=0; i<linhas-1; i++) {
        for (int j=0; j < colunas-1; j++) {
            if (matriz[i][j] == 1 && matriz[i][j+1] == 1 && matriz[i+1][j] == 1 && matriz[i+1][j+1]) {
                sub_m++;
            }
        }
    }

    printf("%d\n", sub_m);
}

