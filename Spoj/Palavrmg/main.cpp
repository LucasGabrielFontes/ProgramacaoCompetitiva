#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;
    string palavra;

    for (int cont = 0; cont < t; cont++) {

        bool ordenada = true;
        cin >> palavra;

        for (int i = 0; i < palavra.size() - 1; i++) {
            if (tolower(palavra[i]) - 'a' >= tolower(palavra[i+1]) - 'a') {
                ordenada = false;
                break;
            }
        }

        if (ordenada) {
            cout << palavra << ": O" << endl;
        } else {
            cout << palavra << ": N" << endl;
        }

    }

    return 0;

}
