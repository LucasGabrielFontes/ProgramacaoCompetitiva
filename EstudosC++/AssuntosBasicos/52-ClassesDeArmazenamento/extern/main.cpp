#include "iostream"

using namespace std;

void printaVariavelExterna(); // Como a funcao esta em outro arquivo, e preciso prototipa-la

int notaLucasGabriel{10};

extern string String;

int main() {

    // extern permite acessar uma variavel que esta em um arquivo externo

    printaVariavelExterna();

    cout << String << endl;

    return 0;

}