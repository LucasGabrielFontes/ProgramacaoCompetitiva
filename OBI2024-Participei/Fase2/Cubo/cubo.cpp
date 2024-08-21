#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; cin >> N;

    int cubos = N*N*N;

    int umLado = (N*N - N - N - (N-2) - (N-2))*6;
    int doisLados = (N-2)*12;
    int tresLados = 8;
    int nenhumLado = cubos-(umLado + doisLados + tresLados);

    cout << nenhumLado << endl;
    cout << umLado << endl;
    cout << doisLados << endl;
    cout << tresLados << endl;

    return 0;
}

