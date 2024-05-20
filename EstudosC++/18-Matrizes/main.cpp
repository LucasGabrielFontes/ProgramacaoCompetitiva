#include <iostream>

using namespace std;

#define L 3
#define C 5

int main () {

    int matriz[L][C];

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Digite um valor para a posicao [" << i << "][" << j << "] da matriz: ";
            cin >> matriz[i][j];
            cout << endl;
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "matriz[" << i << "][" << j << "] = " << matriz[i][j] << endl;
        }
    }

    return 0;

}