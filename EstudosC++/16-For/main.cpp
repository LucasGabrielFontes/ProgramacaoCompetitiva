#include <iostream>

using namespace std;

int main() {
	
	// Nosso querido for
	int contador;
	
	cout << "Digite a quantidade de vezes que o loop ira executar: ";
	cin >> contador;
	
	while (contador < 0) {
		cout << "Quantidade invalida. Tente novamente: ";
		cin >> contador;
	}
	
	if (contador == 0) {
		cout << "\nO loop nao foi executado nenhuma vez.\n";
	}
	
	// O loop for tambem e usado para pausar a execucao do programa
	//
	// for vazio:
	//
	// for (int temp = 0; temp < 1000000000; temp++);
	
	// E possivel declarar mais de uma variavel na inicializacao de variaveis do for
	for (int i = 0; i < contador; i++) {
		cout << "Execucao " << i+1 << "." << endl;
	}
	
	return 0;
	
}
