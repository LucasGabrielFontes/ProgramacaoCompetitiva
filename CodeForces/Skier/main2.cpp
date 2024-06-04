// Essa versao nao foi aceita em um dos testes do CodeForces. Estou trabalhando nisso.

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    string caminho;

    for (; t > 0; t--) {

        cin >> caminho;

        int tempo = 0;

        set<pair<int, int>> coordenadasUnicas;

        pair<int, int> coordenadaAtual = {0,0};

        coordenadasUnicas.insert(coordenadaAtual);

        for (int i = 0; i < caminho.size(); i++) {

            switch (caminho[i]) {

                case 'W':
                    coordenadaAtual.first -= 1;
                    break;

                case 'E':
                    coordenadaAtual.first += 1;
                    break;

                case 'N':
                    coordenadaAtual.second += 1;
                    break;

                case 'S':
                    coordenadaAtual.second -= 1;
                    break;

            }

            if (coordenadasUnicas.find(coordenadaAtual) == coordenadasUnicas.end()) {
                tempo += 5;
            } else {
                tempo += 1;
            }

            coordenadasUnicas.insert(coordenadaAtual);

        }

        cout << tempo << endl;

    }

    return 0;

}
