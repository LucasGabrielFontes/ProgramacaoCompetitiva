#include <iostream>

using namespace std;

#define TAM 10

int main () {

    int vetor[TAM];
    // Mesmissa coisa de sempre

    //sizeof(vetor); Retorna a quantidade de bytes total do vetor. Nesse caso, 4 bytes * 10 posições = 40 bytes. Para saber de fato o tamanho do array, basta dividir, nesse caso, por 4.

    for (int i = 0; i < TAM; i++) {
        cout << "Digite um valor para a posicao " << i << " do array: ";
        cin >> vetor[i];
        cout << endl;
    }

    for (int i = 0; i < TAM; i++) {
        cout << "vetor[" << i << "] = " << vetor[i] << endl;
    }

    return 0;

}