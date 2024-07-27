#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; i++) {

        int a, b; cin >> a >> b;

        if (a-b == 0) { // Se forem iguais, nada precisa ser feito

            cout << "0" << endl;

        } else if (a-b > 0) { // É necessario subtrair um número de a para chegar em b

            int dif = a-b; // Subtrair dif de a para chegar em b

            if (dif%2 != 0) { // Dif é ímpar. É necessario subtrair um par e depois somar um ímpar
                cout << "2" << endl;
            } else{
                cout << "1" << endl; // Dif é par. É necessario apenas subtrair um par
            }

        } else { // É necessário somar um número em a para chegar em b

            int dif = a-b; // Somar dif em a para chegar em b

            if (dif%2 != 0) { // Dif é ímpar. É necessario apenas somar um ímpar
                cout << "1" << endl;
            } else{
                cout << "2" << endl;  // Dif é par. É necessário somar um émpar e subtrair um par
            }  

        }
    }

    return 0;
}