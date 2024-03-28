#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    if (N > 1) {
        printf("1\n");
    }
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }
    printf("%d\n", N);
    return 0;
}