#include "iostream"
#include "exception"

using namespace std;

double divide(int a, int b);

int main() {

    // exception& e

    try {
        cout << divide(5, 0);
    } catch (const char* msg) {
        cout << msg << endl;
    }

    divide(5, 0);

    return 0;

}

double divide(int a, int b) {

    if (b == 0) {
        throw "Dividir por zero. Ae voce me quebra eu, rapaz";
    } else {
        return a/b;
    }

}