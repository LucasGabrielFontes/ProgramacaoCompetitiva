#include <stdio.h>

int calculaDias (double quant);

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        double C;
        scanf("%lf", &C);
        printf("%d dias\n", calculaDias(C));
    }
    return 0;
}

int calculaDias (double quant) {
    int dias = 0;
    while (quant > 1) {
        dias += 1;
        quant /= 2;
    }
    return dias;
}