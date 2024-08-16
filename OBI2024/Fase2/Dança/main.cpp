#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int matriz[n][m];
    vector<int> linhasMatriz(n); // Cada valor desse vetor vai se referir a um indice de uma linha da matriz
    vector<int> colunasMatriz(m); // Cada valor desse vetor vai se referir a um indice de uma coluna da matriz

    int atual = 1;
    for (int i = 0; i < n; i++) { // Prenche a matriz com as posições dos pirralhos
        for (int j = 0; j < m; j++) {
            matriz[i][j] = atual;
            atual++;
        }
    }

    for (int i = 0; i < n; i++) {
        linhasMatriz[i] = i; // Inicializa de 0 a n-1
    }

    for (int j = 0; j < m; j++) {
        colunasMatriz[j] = j; // Inicializa de 0 a m-1
    }

    int passos; cin >> passos;
    for (int i = 0; i < passos; i++) {
        char LC; cin >> LC; // L = trocar linha, C = trocar coluna
        if (LC == 'L') {
            int linha1, linha2; cin >> linha1 >> linha2;
            linha1--; // Ele indexa a partir do 1
            linha2--;

            int temp = linhasMatriz[linha1];
            linhasMatriz[linha1] = linhasMatriz[linha2];
            linhasMatriz[linha2] = temp;

        } else {
            int coluna1, coluna2; cin >> coluna1 >> coluna2;
            coluna1--;
            coluna2--;

            int temp = colunasMatriz[coluna1];
            colunasMatriz[coluna1] = colunasMatriz[coluna2];
            colunasMatriz[coluna2] = temp;

        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cout << matriz[linhasMatriz[i]][colunasMatriz[j]] << " ";
        }
        cout << endl;
    }

    return 0;
}