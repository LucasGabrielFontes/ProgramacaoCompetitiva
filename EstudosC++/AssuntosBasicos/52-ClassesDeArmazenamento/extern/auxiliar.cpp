#include "iostream"

using namespace std;

extern int notaLucasGabriel; // Como e extern, recebe o valor de onde a variavel notaLucasGabriel foi declarada e inicializada

string String = "Vasco";

void printaVariavelExterna() {
    cout << notaLucasGabriel << endl;
}