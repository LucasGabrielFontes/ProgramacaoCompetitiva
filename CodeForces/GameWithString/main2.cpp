// Versao utilizando pilha

#include <bits/stdc++.h>

using namespace std;

int main() {

    string cadeia; cin >> cadeia;
    stack<char> caracteres;

    int cont = 0;
    for (auto carac: cadeia) {
        if (!caracteres.empty() && carac == caracteres.top()) {
            caracteres.pop();
            cont++;
        } else {
            caracteres.push(carac);
        }
    }

    if (cont%2 == 0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}