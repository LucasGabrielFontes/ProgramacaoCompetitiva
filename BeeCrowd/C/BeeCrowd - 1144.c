#include <stdio.h>
#include <math.h>

int main () {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int aux = 1; aux <= 2; aux++) {
            if (aux == 1) {
                printf("%d %.0f %.0f\n", i+1, pow(i+1, 2), pow(i+1, 3));
            } else {
                printf("%d %.0f %.0f\n", i+1, pow(i+1, 2)+1, pow(i+1, 3)+1);
            }
        }
    }
    return 0;
}