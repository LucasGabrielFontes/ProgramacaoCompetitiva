#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;
    cin.ignore();

    string caminho;

    for (; t > 0; t--) {

        getline(cin, caminho);

        int tempo = 0;

        set<pair<pair<int, int>, pair<int, int>>> segmentosUnicos; // Cria um set de pares de coordenadas que identificam um segmento

        pair<int, int> coordenada1 = {0,0};
        pair<int, int> coordenada2 = {0, 0};

        pair<pair<int, int>, pair<int, int>> segmento;

        for (int i = 0; i < caminho.size(); i++) {

            switch (caminho[i]) {

                case 'W':
                    coordenada2.first = coordenada1.first - 1;
                    break;

                case 'E':
                    coordenada2.first = coordenada1.first + 1;
                    break;

                case 'N':
                    coordenada2.second = coordenada1.second + 1;
                    break;

                case 'S':
                    coordenada2.second = coordenada1.second - 1;
                    break;

            }

            segmento.first = max(coordenada1, coordenada2); // O segmento atual recebe o max e min das coordenadas, pois a ordem das coordenas não importa, uma vez que identificam um mesmo segmento
            segmento.second = min(coordenada1, coordenada2);

            coordenada1 = coordenada2; // A primeira coordenada e atualizada para o proximo trajeto

            if (segmentosUnicos.find(segmento) == segmentosUnicos.end()) { // Se o retorno for segmentosUnicos.end(), significa que o trajeto nao havia sido feito anteriormente
                tempo += 5;
                segmentosUnicos.insert(segmento);
            } else {
                tempo += 1;
            }

        }

        cout << tempo << endl;

    }

    return 0;
}