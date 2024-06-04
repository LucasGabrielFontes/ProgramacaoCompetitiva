// Essa versao nao foi aceita em um dos testes do CodeForces. Estou trabalhando nisso.

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    string caminho;

    for (; t > 0; t--) {

        cin >> caminho;

        int tempo = 0;

        vector<pair<int, int>> coordenada(caminho.size() + 1);
        coordenada[0].first = 0;
        coordenada[0].second = 0;

        vector<pair<int, int>>:: iterator iterador;

        for (int i = 1; i <= caminho.size(); i++) {

            iterador = coordenada.begin() + i;

            switch (caminho[i-1]) {

                case 'W':
                    coordenada[i].first = coordenada[i-1].first - 1;
                    coordenada[i].second = coordenada[i-1].second;
                break;

                case 'E':
                    coordenada[i].first = coordenada[i-1].first + 1;
                    coordenada[i].second = coordenada[i-1].second;
                break;

                case 'N':
                    coordenada[i].second = coordenada[i-1].second + 1;
                    coordenada[i].first = coordenada[i-1].first;
                break;

                case 'S':
                    coordenada[i].second = coordenada[i-1].second - 1;
                    coordenada[i].first = coordenada[i-1].first;
                break;

            }

            if (find(coordenada.begin(), iterador, coordenada[i]) == iterador) {
                tempo += 5;
            } else {
                tempo += 1;
            }

        }

        cout << tempo << endl;

    }

    return 0;

}
