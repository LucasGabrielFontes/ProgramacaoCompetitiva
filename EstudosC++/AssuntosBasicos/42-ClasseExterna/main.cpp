#include "iostream"
#include "Estudante.h"

using namespace std;

int main() {

    Estudante *estudante = new Estudante("Lucas Gabriel Fontes da Silva", "20230017589", "12589658749");

    cout << estudante->toString() << endl;

    return 0;
}
