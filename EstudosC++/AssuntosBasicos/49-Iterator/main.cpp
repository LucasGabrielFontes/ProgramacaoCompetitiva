#include "iostream"
#include "vector"

using namespace std;

int main() {

    vector<string> nomes = {"Lucas", "Gabriel", "Carlos", "Luiz", "Gonzaga"};

    vector<string>:: iterator iterador;
    iterador = nomes.begin();

    //advance(iterador, 3); // avanca tres posicoes da posicao atual do iterator (imprimiria "Luiz")
    // no cout: *next(iterador, 3) // faz o mesmo que o advance(iterador, 3), mas nao altera a posicao atual do iterador
    // no cout: *prev(iterador, n) // anda para a esquerda basicamente

    for (int i = 0; i < nomes.size(); i++) {
        cout << *(iterador+i) << endl;
    }

    // vector.end() aponta para uma posicao a mais do final da colecao; se quise de fato o ultimo elemento, subtraia 1

    cout << endl;

    for (int i = 0; i < nomes.size(); i++) {
        cout << *iterador << endl;
        iterador++;
    }

    cout << endl;

    for (iterador = nomes.begin(); iterador != nomes.end(); iterador++) {
        cout << *iterador << endl;
    }

    return 0;

}