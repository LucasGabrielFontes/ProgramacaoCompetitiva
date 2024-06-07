#include <iostream>
#include <cstdlib> // possui o system("cls")

using namespace std;

int main() {
	
	// E possivel criar labels em C++ igual Assembly;
	//
	// goto label;   Instrucao pouco utilizada responsável por modificar a ordem de execucao do codigo
	//
	//
	
	int resp = 0;
	int contador = 0;
	float CRA = 0;
	
	do {
		
		float nota;
		
		cout << "Digite sua nota: ";
		cin >> nota;
		CRA += nota;
		contador++;
		
		cout << "\nDeseja continuar? 1 para sim e 0 para nao: ";
		cin >> resp;
		
		while (resp != 1 && resp != 0) {
			cout << "\nResposta invalida. Tente novamente: ";
			cin >> resp;
		}
		
	} while (resp);
	
	CRA /= contador;
	
	if (CRA >= 9.5) {
		
		cout << "\nCRA de " << CRA << ". PARABENS. Você e brabo demais.";
		
	} else if (CRA >= 9) {
		
		cout << "\nCRA de " << CRA << ". Muito bom! Parabens!";
		
	} else if (CRA >= 8) {
		
		cout << "\nCRA de " << CRA << ". Boa!";
		
	} else if (CRA >= 7) {
		
		cout << "\nCRA de " << CRA << ". Mediano.";
		
	} else {
		
		cout << "\nCRA de " << CRA << ". Melhore.";
		
	}
	
	return 0;
	
}
