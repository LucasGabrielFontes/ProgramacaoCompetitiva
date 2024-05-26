#include <iostream>
#include <stack>

using namespace std;

int main () {

    stack <int> contagem;

    if (contagem.empty()) {
        cout << "Pilha vazia" << endl;
    } else {
        cout << "Ha elementos na pilha" << endl;
    }

    contagem.push(3);
    contagem.push(2);
    contagem.push(1);

    while (!contagem.empty()) { // Esvazia a pilha
        contagem.pop();
    }

    if (contagem.empty()) {
        cout << "Pilha vazia" << endl;
    } else {
        cout << "Ha elementos na pilha" << endl;
    }

    return 0;

}