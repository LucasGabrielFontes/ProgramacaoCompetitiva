#include <iostream>

using namespace std;

int main() {
	
	int nota = 5;
	
	switch (nota) {
		
		// Você pode tratar os cases como labels, igual Assembly.
		
		case 10:
			cout << "Dez";
		break;
		
		case 9:
			cout << "Nove";
		break;
		
		case 8:
			cout << "Oito";
		break;
		
		default:
			cout << "Entre zero e sete";
	
	}
	
	return 0;
	
}
