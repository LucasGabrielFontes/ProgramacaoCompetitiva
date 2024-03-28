#include <stdio.h>

int analisaCol (int c);

int main () {
    int C;
    scanf("%d", &C);
    int top = analisaCol(C);
    printf("Top %d\n", top);
    return 0;
}

int analisaCol (int c) {
    int tops[7] = {1, 3, 5, 10, 25, 50, 100};
    for (int i = 0; i < 7; i++) {
        if (c <= tops[i]) {
            return tops[i];
        }
    }
    return 0;
}