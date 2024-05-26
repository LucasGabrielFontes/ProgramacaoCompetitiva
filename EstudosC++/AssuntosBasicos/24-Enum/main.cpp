#include <iostream>

using namespace std;

// Enum, basicamente, é a definicao de um novo tipo de variavel. Sao definidos os dados que uma variavel desse tipo pode receber. Por tras, esses dados acabam sendo valores inteiros.

int main () {

    enum liguagens {
        c, // 0. Voce tambem pode especificar o indice que voce quer, como: c = 100. Nesse caso, os proximos elementos terao indices sequenciais com a relacao ao elemento anterior a ele, se voce nao defini-los explicitamente.
        python, // 1
        java, // 2
        cpp // 3
    };

    liguagens melhorLinguagem = java;

    cout << "A melhor liguagem e: " << melhorLinguagem << endl; // Imprime 2

    return 0;

}