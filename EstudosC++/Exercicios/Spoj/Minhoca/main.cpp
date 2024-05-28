#include <iostream>

using namespace std;

int main () {

    int N, M;

    cin >> N;
    cin >> M;

    int terreno[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            cin >> terreno[i][j];

        }
    }

    int maiorProdutividade = 0;
    int somaProdutividade = 0;

    for (int i = 0; i < N; i++) {

        somaProdutividade = 0;

        for (int j = 0; j < M; j++) {

            somaProdutividade += terreno[i][j];

        }

        if (somaProdutividade > maiorProdutividade) {

            maiorProdutividade = somaProdutividade;

        }

    }

    for (int j = 0; j < M; j++) {

        somaProdutividade = 0;

        for (int i = 0; i < N; i++) {

            somaProdutividade += terreno[i][j];

        }

        if (somaProdutividade > maiorProdutividade) {

            maiorProdutividade = somaProdutividade;

        }

    }

    cout << maiorProdutividade << endl;

    return 0;

}