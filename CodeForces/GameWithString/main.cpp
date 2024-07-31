// Código em construcao. Wrong answer no teste 7 do code forces - ainda.

#include <bits/stdc++.h>

using namespace std;

int main() {

    string str; cin >> str;

    long long int cont = 0; // Impar ele ganha
    for (unsigned long long int i = 0; i < str.size()-1; i++) {
        int teste = 0;
        if (str[i] == str[i+1]){
            cont++;
            teste = 1;
        }

        if (i+3 < str.size()) {
            if (str[i] == str[i+3]){
                cont++;
            }
        }
        if (teste) {
            i++;
        }
        teste = 0;
    }

    if (cont%2 == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}