#include <iostream>

using namespace std;

int fatorial (int a);
int fibonacci (int num);

int main () {

    int num;

    cout << "Calcular o fatorial de: ";
    cin >> num;
    cout << "Fatorial de " << num << ": " << fatorial(num) << endl;

    cout << endl << "Calcular a sequencia de Fibonacci ate o numero na posicao: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i+1) << endl;
    }

    return 0;

}

int fatorial (int a) {

    if (a == 0) {
        return 1;
    }

    return a * fatorial(a-1);

}

/*
int fatorial (int a, int fat) {

    if (a != 0) {
        fat *= a;
        fatorial(--a, fat);
    } else {
        return fat;
    }

}
*/

int fibonacci (int a) {

    if (a == 1 || a == 2) {
        return 1; // Em algum momento chega aqui e desempilha
    } else {
        return fibonacci(a-1) + fibonacci(a-2); 
    }

}

/*
void fibonacci (int num, int anterior, int posterior) {

    if (num != 0) {
        cout << anterior << endl;
        fibonacci(--num, posterior, anterior + posterior);
    }

}
*/