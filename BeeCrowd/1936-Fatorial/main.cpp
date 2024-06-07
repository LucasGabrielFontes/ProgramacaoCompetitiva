#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;

    vector<int> fatoriais(9);
    fatoriais[0] = 1;

    for (int i = 1; i < fatoriais.size(); i++) {
        fatoriais[i] = i*fatoriais[i-1];
    }

    int cont = 0;
    int soma = 0;

    int i = fatoriais.size() - 1;
    while (soma != n) {

        soma += fatoriais[i];
        cont++;

        if (soma > n) {
            soma -= fatoriais[i];
            i--;
            cont--;
        }

    }

    cout << cont << endl;

    return 0;
}
