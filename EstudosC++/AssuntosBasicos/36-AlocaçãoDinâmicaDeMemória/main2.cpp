#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

    //int *vetor;
    int tam; cin >> tam;
    int *vetor = new int[tam];

    //vetor = (int *) malloc(sizeof(int) * tam);

    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }

    delete[] vetor;

    return 0;

}