#include <iostream>
#include <list>

using namespace std;

int main () {

    list <int> listaAulas;
    int tam = 10;
    list <int>:: iterator iterador;

    for (int i = 0; i < tam - 1; i++) {
        listaAulas.push_front(i+1);
    }

    iterador = listaAulas.begin(); // O inicio e o front!!!
    listaAulas.insert(iterador, 10);
    listaAulas.erase(--iterador); // Remove um elemento. E preciso decrementar o iterador

    //listaAulas.clear(); // Remove todos os elementos da lista
    // Tambem existe o empty em lista

    tam = listaAulas.size();

    for (int i = 0; i < tam; i++) {
        cout << listaAulas.front() << endl;
        listaAulas.pop_front();
    }

    return 0;

}