#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 256

void tiraenter (char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
}

int validasenha (char string[]) {
    int maiusc = 0, minusc = 0, num = 0, acentos = 0, cedilha = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            return 0;
        } else if (isdigit(string[i]) != 0) {
            num += 1;
        } else if (ispunct(string[i]) != 0) {
            return 0;
        } else if (string[i] == toupper(string[i])) {
            maiusc += 1;
            if (strcmp(&string[i], "Ç")) {
                cedilha += 1;
            }
        } else if (string[i] == tolower(string[i])) {
            minusc += 1;
            if (strcmp(&string[i], "ç")) {
                cedilha += 1;
            }
        }
    }
    acentos = strlen(string) - maiusc - minusc - num - cedilha;
    if ((maiusc == 0) || (minusc == 0) || (num == 0) || (acentos > 0)) {
        return 0;
    }
    return 1;
}

int main () {
    char S[TAM];
    while (fgets(S, TAM, stdin) != NULL) {
        fflush(stdin);
        tiraenter(S);
        if ((strlen(S) > 32) || (strlen(S) < 6)) {
            printf("Senha invalida.\n");
        } else {
            if (validasenha(S) == 1) {
                printf("Senha valida.\n");
            } else {
                printf("Senha invalida.\n");
            }
        }   
    }
    return 0;
}