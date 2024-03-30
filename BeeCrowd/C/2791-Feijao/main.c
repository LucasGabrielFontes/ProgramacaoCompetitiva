#include <stdio.h>

int main () {
    int vetor[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] == 1) {
            printf("%d\n", i+1);
            break;
        }
    }
    return 0;
}