#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int *ponteiro;
	int vetor[10];
	
	for (int i = 0; i < 10; i++) {
		
		vetor[i] = i+1;
		
	}
	
	ponteiro = vetor; // o ponteiro recebe o endereco de memoria do primeiro elemento do array
	// ponteiro = &vetor[0]
	
	for (int i = 0; i < 10; i++) {
		
		cout << *ponteiro << endl;
		ponteiro++; // Adiciona 1 ao endereco apontado por ponteiro. Adiciona 4 bytes no endereco.
		
	}
	
	return 0;
	
}
