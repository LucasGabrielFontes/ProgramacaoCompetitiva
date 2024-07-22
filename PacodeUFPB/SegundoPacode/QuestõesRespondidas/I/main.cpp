#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int n;
    long long int k;
    cin >> n >> k;

    long long int impares = 0;
    long long int pares = 0;

    if (n%2 == 0) {
        impares = n/2;
        pares = impares;
    } else {
        impares = n/2 + 1;
        pares = impares - 1;
    }

    if (k <= impares) {

        long long int resp = 1;
        for (long long int cont = 2; cont <= k; cont ++) {
            resp += 2;
        }

        cout << resp << endl;

    } else {

        long long int resp = 2;
        for (long long int cont = 2; cont <= k-impares; cont++) {
            resp += 2;
        }

        cout << resp << endl;

    }

    return 0;
}
