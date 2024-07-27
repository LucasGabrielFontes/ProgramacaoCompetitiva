#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    for(int i = 0; i < t; i++){

        int a, b; cin >> a >> b;

        int resto = a%10;

        if (resto == 0) {
            resto = b%10;
            int aux = b;
            b = a;
            a = aux;
        }

        cout << a-resto << " x " << b << " + " << resto << " x " << b << endl;
    }

    return 0;
}