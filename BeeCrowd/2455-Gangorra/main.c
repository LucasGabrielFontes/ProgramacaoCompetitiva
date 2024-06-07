#include <stdio.h>

int calculaEquilibrio (int a, int b, int c, int d);

int main () {
    int P1, C1, P2, C2;
    scanf("%d %d %d %d", &P1, &C1, &P2, &C2);
    printf("%d\n", calculaEquilibrio(P1, C1, P2, C2));
    return 0;
}

int calculaEquilibrio (int a, int b, int c, int d) {
    if (a*b == c*d) {
        return 0;
    } else if (a*b < c*d) {
        return 1;
    } else {
        return -1;
    }
}