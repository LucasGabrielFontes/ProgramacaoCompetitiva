#include <stdio.h>

int main () {
    int produtos, tipo, quantidade;
    float soma = 0;
    scanf("%d", &produtos);
    for (int i = 0; i < produtos; i++) {
        scanf("%d %d", &tipo, &quantidade);
        switch (tipo) {
            case 1001:
                soma += 1.5 * quantidade;
            break;

            case 1002:
                soma += 2.5 * quantidade;
            break;

            case 1003:
                soma += 3.5 * quantidade;
            break;

            case 1004:
                soma += 4.5 * quantidade;
            break;

            case 1005:
                soma += 5.5 * quantidade;
            break;
        }
    }
    printf("%.2f\n", soma);
    return 0;
}