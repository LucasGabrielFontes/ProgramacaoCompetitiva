#include <iostream>

using namespace std;

void mostraCadastro(string nome = "NOONE", int idade = 0, string CPF = "000.0000.000-00"); // E possivel criar valores default para os argumentos de uma funcao. Assim, se algum deles nao for passado como parametro na chamada da funcao, sera utilizado o valor pre-definido.

int main () {

    mostraCadastro("Lucas" ,15);

    return 0;

}

void mostraCadastro(string nome, int idade, string CPF) {

    cout << "Nome: " << nome << endl << "Idade: " << idade << endl << "CPF: " << CPF << endl;

}