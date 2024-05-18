#include <iostream>

using namespace std;

int main() {
	
	int numAtual = 0;
	int numDig = 0;
	
	for (; numAtual < 3; numAtual++) {
		cout << numAtual << endl;
	}
	
	numAtual--;
	
	do {
		cout << "\nDigite o proximo numero da sequencia: ";
		cin >> numDig;
		
		while (numDig != numAtual + 1) {
			cout << "\nNúmero errado! Tente novamente: ";
			cin >> numDig;
		}
		
		numAtual++;
		
	} while (numAtual < 10);
	
	cout << "\nSequencia finalizada. Muito bem.";
	
	return 0;
	
}
