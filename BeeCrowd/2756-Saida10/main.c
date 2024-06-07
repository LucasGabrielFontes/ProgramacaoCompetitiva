#include <stdio.h>

int main () {
    char letra = 65;
    int espacos = 7, contador = 1;
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            for (int aux = 0; aux < espacos; aux++) {
                printf(" ");
            }
            printf("%c\n", letra);
            letra += 1;
            espacos -= 1;
        } else if (i == 1) {
            for (int aux = 0; aux < espacos; aux++) {
                printf(" ");
            }
            printf("%c", letra);
            for (int aux = 0; aux < contador; aux++) {
                printf(" ");
            }
            printf("%c\n", letra);
            letra += 1;
            espacos -= 1;
            contador += 2;
        } else {
            for (int aux = 0; aux < espacos; aux ++) {
                printf(" ");
            }
            printf("%c", letra);
            for (int aux = 0; aux < contador; aux++) {
                printf(" ");
            }
            printf("%c\n", letra);
            letra += 1;
            espacos -= 1;
            contador += 2;
        }
    }
    letra -= 2;
    espacos += 2;
    contador -= 4;
    for (int i = 0; i < 4; i++) {
        if (i == 3) {
            for (int aux = 0; aux < espacos; aux++) {
                printf(" ");
            }
            printf("%c\n", letra);
        } else {
            for (int aux = 0; aux < espacos; aux++) {
                printf(" ");
            }
            printf("%c", letra);
            for (int aux = 0; aux < contador; aux++) {
                printf(" ");
            }
            printf("%c\n", letra);
            letra -= 1;
            espacos += 1;
            contador -= 2;
        }
    }
    return 0;
}