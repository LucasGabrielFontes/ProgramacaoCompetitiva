#include <bits/stdc++.h>

using namespace std;

bool testaSoma(string a, string b);

int main() {

    string a, b;
    cin >> a >> b;

    if (testaSoma(a, b)) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

    return 0;
}

bool testaSoma(string a, string b) {

    for (int i = 7; i >= 0; i--) {
        if (a[i] == '1' && b[i] == '1') {
            return false;
        }
    }

    return true;
}
