#include <bits/stdc++.h>

using namespace std;

void incrementa (int *x);
void inicializaVetor22 (int vetor[], int tam);

int main () {
	
	int num = 0;
	int vetor[10];
	
	incrementa(&num);
	inicializaVetor22(vetor, 10);
	
	for (int i = 0; i < 10; i++) {
		cout << vetor[i] << endl;
	}
	
	cout << "\n" << num << endl;
	
	return 0;
	
}

void incrementa (int *x) {
	(*x)++;
}

void inicializaVetor22 (int *pt, int tam) {
	
	for (int i = 0; i < tam; i++) {
		
		*(pt+i) = 22;
		
	}
	
}
