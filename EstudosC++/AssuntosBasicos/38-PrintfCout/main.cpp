#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int num = 10;
    float pi = M_PI;

    //cout << "Num em decimal: " << num << endl;
    //cout << "Num em hexadecimal: " << hex << num << endl; // hex, oct, dec

    cout.precision(4); // 3 casas decimais
    cout << "Valor de PI: " << pi << endl;

    cout.precision(-1); // Volta a precisao normal
    cout << "Valor de PI: " << pi << endl;

    return 0;

}
