#include <bits/stdc++.h>

using namespace std;

int main() {

    int lajotas; cin >> lajotas;

    while (lajotas != 0) {
        int a = 1;
        int b = 1;
        for (int i = 3; i <= lajotas+1; i++) {
            int c = b;
            b = a+b;
            a = c;
        }
        cout << b << endl;
        cin >> lajotas;
    }

    return 0;
}