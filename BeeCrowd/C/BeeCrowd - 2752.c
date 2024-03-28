#include <stdio.h>
#include <string.h>

#define TAM 51

int main () {
    char frase[TAM];
    strcpy(frase, "AMO FAZER EXERCICIO NO URI");
    printf("<%s>\n", frase);
    printf("<%30s>\n", frase);
    printf("<%.20s>\n", frase);
    printf("<%-20s>\n", frase);
    printf("<%-30s>\n", frase);
    printf("<%.30s>\n", frase);
    printf("<%30.20s>\n", frase);
    printf("<%-30.20s>\n", frase);
    return 0;
}