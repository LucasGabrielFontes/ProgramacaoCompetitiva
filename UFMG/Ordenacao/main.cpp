#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n;
	cin >> n;
	
	vector <int> vetorInicial;
	vector <int> vetorOrdenado;
	
	int num = 0;
	for (int i = 0; i < n; i++) {
		
		cin >> num;
		vetorInicial.push_back(num);
		vetorOrdenado.push_back(num);
		
	}
	
	sort(vetorOrdenado.begin(), vetorOrdenado.end());
	
	map <int, int> relacao;
		
	for (int i = 0; i < n; i++) {
		
		relacao[vetorOrdenado[i]] = i;
		
	}	
	
	for (int i = 0; i < n; i++) {
		
		cout << relacao[vetorInicial[i]] << " ";
			
	}
		
	return 0;
	
}
