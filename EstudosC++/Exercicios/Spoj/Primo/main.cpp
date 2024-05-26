#include <iostream>

using namespace std;

bool testaPrimo (int num);

int main () {

    int N;
    cin >> N;

    if (testaPrimo(N)) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
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