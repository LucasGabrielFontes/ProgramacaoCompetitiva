#include <bits/stdc++.h>

using namespace std;

int main() {

    int tam; cin >> tam;
    cin.ignore();
    string palavra;

    getline(cin, palavra);

    int localO = palavra.find('o');
    int localN = palavra.find('n');
    int localE = palavra.find('e');

    while (localO != string::npos && localN != string:: npos && localE != string::npos) {

        cout << 1 << " ";

        palavra[localO] = 'i';
        palavra[localN] = 'i';
        palavra[localE] = 'i';

        localO = palavra.find('o');
        localN = palavra.find('n');
        localE = palavra.find('e');

    }

    int localZ = palavra.find('z');
    localE = palavra.find('e');
    int localR = palavra.find('r');
    localO = palavra.find('o');

    while (localZ != string::npos && localE != string:: npos && localR != string::npos && localO != string::npos) {

        cout << 0 << " ";

        palavra[localZ] = 'i';
        palavra[localE] = 'i';
        palavra[localR] = 'i';
        palavra[localO] = 'i';

        localZ = palavra.find('z');
        localE = palavra.find('e');
        localR = palavra.find('r');
        localO = palavra.find('o');

    }

    cout << endl;

    return 0;

}
