#include <bits/stdc++.h>

using namespace std;

int main() {

    int k, n; cin >> k >> n;

    string alfabeto; cin >> alfabeto;
    string mensagem; cin >> mensagem;

    for (int i = 0; i < n; i++) {
        int teste = 0;
        for (int j = 0; j < k; j++) {
           if (mensagem[i] == alfabeto[j]) {
                teste++;
           }
        }
        if (teste == 0) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}


