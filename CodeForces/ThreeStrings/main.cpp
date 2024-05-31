#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    string a, b, c;

    int i;
    for (i = 0; i < t; i++) {

        cin >> a >> b >> c;
        bool teste = true;

        for (int j = 0; j < a.size(); j++) {

            if (c[j] != b[j] && c[j] != a[j]) {
                cout << "NO" << endl;
                teste = false;
                break;
            }

        }

        if (teste) {
            cout << "YES" << endl;
        }

    }

    return 0;
}
