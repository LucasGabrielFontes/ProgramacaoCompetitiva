#include <stdio.h>

int divisores(int n);

int main() {
    int qtde;
    scanf("%d", &qtde);

    for (int i = 0; i < qtde; i++) {
        int n;
        scanf("%d", &n);

        printf("%d\n", divisores(n));
    }

    return 0;
}

int divisores(int n) {
    int divs = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs++; 
            if (i != n / i) {
                divs++; 
            }
        }
    }
  return divs;
}