#include <iostream>
#include <string>

using namespace std;

int main () {
	
	// Inicialize as vari�veis antes de utiliz�-las
	int titulos;	
	char letra;
	float decimal;
	double outroDecimal;
	bool VouF = true; // internamente � 1 ou 0
	string nome;
	
	cout << "Digite o seu nome: ";
	getline(cin, nome);
	
	cout << "Seu nome e " << nome << endl; 
	
	return 0;
	
}
