#include <iostream>
#include <stack>

using namespace std;

int main () {

    stack <string> parametros; // Declaracao de uma pilha de dados do tipo string com o nome parametros.

    parametros.push("Parametro 5");
    parametros.push("Parametro 4");
    parametros.push("Parametro 3");
    parametros.push("Parametro 2");
    parametros.push("Parametro 1");

    int argumentos = parametros.size();

    for (int i = 0; i < argumentos; i++) {
        string parametro = parametros.top();
        cout << parametro << endl;
        parametros.pop();
    }

    return 0;

}