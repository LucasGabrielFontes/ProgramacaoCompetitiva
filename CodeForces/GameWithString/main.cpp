// Código sem pilha em construcao. Wrong answer no teste 9 do code forces - ainda.

#include <bits/stdc++.h>

using namespace std;

int main() {

    string cadeia; cin >> cadeia;

    int cont = 0; // Impar ele ganha

    cont = 0;
    for (unsigned i = 0; i < cadeia.size()-1; i++) {
        
        if (cadeia[i] == cadeia[i+1]) {
            char char_i = '\0';
            if (i > 0) char_i = cadeia[i-1];

            while (cadeia[i] == cadeia[i+1]) {
                cadeia.erase(i, 2);
                cont++;
                if (i+1 > cadeia.size()-1) break;
            }

            if (cadeia.size() > 0) {
                char char_f = cadeia[i];
                if (char_i == char_f) cont++;
            } else {
                break;
            }
        }
    }

    if (cont%2 == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}