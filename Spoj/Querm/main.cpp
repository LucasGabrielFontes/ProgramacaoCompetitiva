#include <iostream>

using namespace std;

int main () {

    int N;
    int contador = 0;

    cin >> N;

    while (N != 0) {

        contador++;
        int ordemChegadaIngressos[N];

        for (int i = 0; i < N; i++) {
            cin >> ordemChegadaIngressos[i];

            if (ordemChegadaIngressos[i] == i+1) {

                cout << "Teste " << contador << endl << i+1 << endl << endl;

            }

        }

        cin >> N;

    }

    return 0;

}