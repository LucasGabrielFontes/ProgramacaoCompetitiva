#include <iostream>

using namespace std;

int fatorial (int num);

int main () {

    int N;
    cin >> N;

    cout << fatorial(N) << endl;

    return 0;

}

int fatorial (int num) {

    if (num == 0) {
        return 1;
    } else {
        return num * fatorial(num-1);
    }

}