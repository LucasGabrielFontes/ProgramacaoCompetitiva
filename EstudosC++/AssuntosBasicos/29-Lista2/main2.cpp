#include <iostream>
#include <list>

using namespace std;

#define TAM 10

int main () {

    list <int> impares;
    list <int> pares;

    for (int i = 1; i < TAM; i+=2) {
        impares.push_front(i);
        pares.push_front(i+1);
    }

    pares.sort();
    impares.sort();

    impares.merge(pares); // Mescla duas listas. O resultado é ordenado e guardado em impares quando as duas listas estão ordenadas; Se as listas não estiverem ordenadas antes de chamar o método merge(), a lista resultante não estará ordenada. O método merge() simplesmente anexa os elementos da segunda lista ao final da primeira lista, sem qualquer ordenação.

    int tam = impares.size();

    for (int i = 0; i < tam; i++) {
        cout << impares.front() << endl;
        impares.pop_front();
    }

    return 0;

}