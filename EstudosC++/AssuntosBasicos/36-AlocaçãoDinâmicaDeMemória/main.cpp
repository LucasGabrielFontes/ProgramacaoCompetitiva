#include <iostream>
#include <cstdio> // gets()
#include <cstdlib> // malloc

using namespace std;

int main () {

    //char nome[50];
    char *nome; // Cria-se um ponteiro e não determina seu tamanho
    nome = (char *) malloc(sizeof(char) + 1); // (char *) serve para converter o retorno *void* da funcao malloc para o tipo desejado (ponteiro de char)
    // O tamanho do tipo do elemento trabalhado e passado para a funcao malloc

    gets(nome);

    cout << nome << endl;

    return 0;

}
