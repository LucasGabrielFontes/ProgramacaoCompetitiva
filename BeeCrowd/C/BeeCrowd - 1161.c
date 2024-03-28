#include <stdio.h>

long long int calculaFatorial (long long int x);

int main () {
    long long int a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) {
        long long int somaFatorial = calculaFatorial(a) + calculaFatorial(b);
        printf("%lld\n", somaFatorial);
    }
    return 0;
}

long long int calculaFatorial (long long int x) {
    long long int f = 1;
    for (int y = 1; y <= x; y++) {
        f *= y;
    }
    return f;
}