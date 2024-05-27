#include <iostream>
#include <queue>

using namespace std;

int main () {

    queue <int> numeros; // Primeiro a entrar é o primeiro a sair. Último a entrar é o último a sair.

    numeros.push(1);
    numeros.push(2);
    numeros.push(3);
    numeros.push(4);
    numeros.push(5);

    int tam = numeros.size();

    for (int i = 0; i < tam; i++) {
        cout << numeros.front() << endl; // Retorna o elemento no primeiro lugar da fila (back retorna o último)
        numeros.pop();
    }

    return 0;

}