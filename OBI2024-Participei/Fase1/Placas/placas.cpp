#include <bits/stdc++.h>

using namespace std;

int main() {

    string placa;

    cin >> placa;

    string placa2 = placa;

    for (int i = 0; i < placa.size(); i++) {
        placa2[i] = tolower(placa[i]);
    }

    if (placa.size() == 8) {

        if (placa[3] != '-') {
            cout << "0" << endl;
        } else {

            if (placa2[0] == placa[0] || placa2[1] == placa[1] || placa2[2] == placa[2]) {
                cout << "0" << endl;
            } else {

                if (placa2[4] != placa[4] || placa2[5] != placa[5] || placa2[6] != placa[6] || placa2[7] != placa[7]) {

                    cout << "0" << endl;

                } else {
                    cout << "1" << endl;
                }

            }

        }

    } else if (placa.size() == 7) {

        if (placa2[0] == placa[0] || placa2[1] == placa[1] || placa2[2] == placa[2]) {
                cout << "0" << endl;
        } else {

            if (placa2[3] != placa[3]) { //

                cout << "0" << endl;

            } else {

                if (placa2[4] == placa[4]) {

                    cout << "0" << endl;

                } else {

                    if (placa2[5] != placa[5] || placa2[6] != placa[6]) {

                        cout << "0" << endl;

                    } else {

                        cout << "2" << endl;

                    }

                }

            }

        }

    } else {

        cout << "0" << endl;

    }

    return 0;

}
