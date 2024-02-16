#include <stdio.h>

int main () {
    int nota1, nota2;
    float media;
    scanf("%d %f", &nota1, &media);
    nota2 = 2*media - nota1;
    printf("%d\n", nota2);
    return 0;
}