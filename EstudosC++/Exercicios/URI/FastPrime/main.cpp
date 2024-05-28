#include <iostream>

using namespace std;

bool testaPrimo (int num);

int main () {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {

        int X;
        cin >> X;

        if (testaPrimo(X)) {

            cout << "Prime" << endl;

        } else {

            cout << "Not Prime" << endl;

        }

    }

    return 0;

}

bool testaPrimo (int num) {

    for (int i = 2; i*i <= num; i++) {

        if (num % i == 0) {
            return false;
        }

    }

    return true;

}