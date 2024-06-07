#include <iostream>

using namespace std;

// Declaração de uma constante global
#define PI 3.14

// Declaração de um comando constante
#define imprimeBordao cout << "Vasco da Gama e nada mais" << endl;

int main () {
	
	// Declaração de múltiplas variáveis
	//int titulos = 100, gols = 59, jogadores = 11, rebaixamentos = 2;
	
	float raio;
	
	cout << "Digite o comprimento do raio: ";
	cin >> raio;
	
	cout << "Comprimento da circunferencia: " << 2*PI*raio << endl;
	
	imprimeBordao;
	
	return 0;
	
}
