#include <bits/stdc++.h>

using namespace std;

int main() {

    int tam; cin >> tam;
    cin.ignore();
    string palavra;

    getline(cin, palavra);

    unsigned contOne = count(palavra.begin(), palavra.end(), 'n');
    unsigned contZero = count(palavra.begin(), palavra.end(), 'z');

    for (int i = 0; i < contOne; i++) {
        cout << 1 << " ";
    }

    for (int i = 0; i < contZero; i++) {
        cout << 0 << " ";
    }

    cout << endl;

    return 0;

}
