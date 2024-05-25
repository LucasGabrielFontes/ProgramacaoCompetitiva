#include <iostream>

using namespace std;

void mostraCliente (string nome, string CPF, string RG);
void mostraCliente (string nome, string CPF);

int main () {

    mostraCliente("Lucas Gabriel", "Nao");

    return 0;

}

void mostraCliente (string nome, string CPF, string RG) {

    cout << "Nome: " << nome << endl << "CPF: " << CPF << endl << "RG: " << RG << endl;

}

void mostraCliente (string nome, string CPF) {

    cout << "Nome: " << nome << endl << "CPF: " << CPF << endl;

}