#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {

    argc > 1 ? cout << "Foram passados " << argc << " argumentos. Sao eles:" << endl << endl : cout << "Foi passado apenas o nome do arquivo como argumento:" << endl << endl;

    for (int i = 0; i < argc; i++) {

        cout << i+1 << "- " << argv[i] << endl;

    }

    return 0;

}