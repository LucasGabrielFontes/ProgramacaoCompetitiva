#include <iostream>
#include <list>

using namespace std;

#define TAM 3

int main () {

    list <int> aula; // lista <int> aula(50); lista de tamanho 50
                     // lista <int> aula(5, 50); lista de tamanho 5 inicializada com o valor 50 em cada uma delas


    list <int>:: iterator iterador;

    aula.push_front(1);
    aula.push_front(2);
    aula.push_front(4);
    aula.push_front(5);

    iterador = aula.begin(); // Inicializa o iterador com o primeiro elemento da lista
    advance(iterador, 2); // Avanca o iterador a partir do primeiro elemento da lista
    aula.insert(iterador, 3); // Insere o elemento no meio da lista

    aula.sort(); // Ordena a lista: os maiores elementos ficam no back, e os menores no front
    aula.reverse(); // Troca a ordem de tudo

    int tam = aula.size();

    for (int i = 0; i < tam; i++) {
        cout << "Aula " << aula.front() << endl;
        aula.pop_front();
    }

    return 0;

}