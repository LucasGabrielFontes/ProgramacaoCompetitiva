#include <iostream>

using namespace std;

void imprimeNumeros (int inicio = 1, int fim = 10);

int main () {

    imprimeNumeros(1, 10);

    return 0;

}

void imprimeNumeros (int inicio, int fim) {

    if (inicio <= fim) {
        cout << inicio << endl;
        imprimeNumeros(++inicio, fim);
    } else {
        cout << "Fim" << endl;
    }

}