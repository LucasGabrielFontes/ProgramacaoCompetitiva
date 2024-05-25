#include <iostream>

using namespace std;

bool comparaValorAbsoluto (int a, int b);

int main (int argc, char *argv[]) {

    int x;
    int y;

    cout << "Digite um numero: ";
    cin >> x;
    cout << "\nDigite outro numero: ";
    cin >> y;

    if (comparaValorAbsoluto(x, y)) {
        cout << "\nOs valore sao iguais em modulo" << endl;
    } else {
        cout << "\nOs valores sao diferentes em modulo" << endl;
    }

    return 0;

}

bool comparaValorAbsoluto (int a, int b) {

    if (a/b == 1 || a/b == -1) {
        return true;
    } else {
        return false;
    }

}