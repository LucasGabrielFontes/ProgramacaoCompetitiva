#include <bits/stdc++.h>

using namespace std;

int main() {

    int linhas, colunas, passos; cin >> linhas >> colunas >> passos;
    int matriz[linhas][colunas];

    int atual = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = atual;
            atual++;
        }
    }

    vector<int> linhasMatriz(linhas);
    vector<int> colunasMatriz(colunas);

    for (int i = 0; i < linhas; i++) {
        linhasMatriz[i] = i;
    }

    for (int j = 0; j < colunas; j++) {
        colunasMatriz[j] = j;
    }

    for (int cont = 0; cont < passos; cont++) {
        char LC; cin >> LC;
        int linha1; cin >> linha1;
        linha1--;
        int coluna2; cin >> coluna2;
        coluna2--;

        if (LC == 'L') {

            int temp = linhasMatriz[linha1];
            linhasMatriz[linha1] = linhasMatriz[coluna2];
            linhasMatriz[coluna2] = temp;

            //for (int j = 0; j < colunas; j++) {
            //    int temp = matriz[linha1][j];
            //    matriz[linha1][j] = matriz[coluna2][j];
            //    matriz[coluna2][j] = temp;
            //}

        } else {

            int temp = colunasMatriz[linha1];
            colunasMatriz[linha1] = colunasMatriz[coluna2];
            colunasMatriz[coluna2] = temp;

            //for (int i = 0; i < linhas; i++) {
            //    int temp = matriz[i][linha1];
            //    matriz[i][linha1] = matriz[i][coluna2];
            //    matriz[i][coluna2] = temp;
            //}

        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[linhasMatriz[i]][colunasMatriz[j]] << " ";
        }
        cout << endl;
    }

    return 0;
}
