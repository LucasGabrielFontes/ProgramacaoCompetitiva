#include <iostream>

using namespace std;

int main () {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int linhas, colunas, x, y;
        cin >> linhas >> colunas >> x >> y;

        x++; // Optei por tratar as coordenadas a partir do 1
        y++;

        int areaMax = 0;

        if (x <= linhas/2) { // Divido em casos gerais: o dead pixel só pode estar em um dos quatro quadrantes da tela. Em cada um desses casos, há apenas duas áreas máximas possíveis que não contém o pixel morto.

            if (y <= colunas/2) {

                areaMax = (linhas-x)*colunas;

                if (linhas*(colunas-y) > areaMax) {

                    areaMax = linhas*(colunas-y);

                }

            } else {

                areaMax = (linhas-x)*colunas;

                if (linhas*(y-1) > areaMax) {

                    areaMax = linhas*(y-1);

                }

            }

        } else {

            if (y <= colunas/2) {

                areaMax = (x-1)*colunas;

                if (linhas*(colunas-y) > areaMax) {

                    areaMax = linhas*(colunas-y);

                }

            } else {

                areaMax = (x-1)*colunas;

                if (linhas*(y-1) > areaMax) {

                    areaMax = linhas*(y-1);

                }

            }

        }

        cout << areaMax << endl;

    }

    return 0;

}
