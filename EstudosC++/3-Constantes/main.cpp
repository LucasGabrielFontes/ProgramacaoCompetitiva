#include <iostream>

using namespace std;

// Declara��o de uma constante global
#define PI 3.14

// Declara��o de um comando constante
#define imprimeBordao cout << "Vasco da Gama e nada mais" << endl;

int main () {
	
	// Declara��o de m�ltiplas vari�veis
	//int titulos = 100, gols = 59, jogadores = 11, rebaixamentos = 2;
	
	float raio;
	
	cout << "Digite o comprimento do raio: ";
	cin >> raio;
	
	cout << "Comprimento da circunferencia: " << 2*PI*raio << endl;
	
	imprimeBordao;
	
	return 0;
	
}
