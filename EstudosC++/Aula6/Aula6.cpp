#include <iostream>

using namespace std;

int c, d; // Variáveis globais

int main () {
	
	// * / + - % ()
	
	int a, b; // Variáveis locais
	int resultado;
	
	a = 9;
	b = 12;
	c = 10;
	d = 15;
	
	resultado = a + b + c + d;
	
	cout << "Soma de todas as variáveis: " << resultado << endl; 
	
	return 0;
	
}
