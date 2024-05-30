#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int N;
	cin >> N;
	
	vector < pair<int, int> > pares(61, {0,0}); // O tamanho maximo e 60 e o indice indica o tamanho.
	
	int tam;
	char pe;
	
	for (int i = 0; i < N; i++) {
		
		cin >> tam;
		cin >> pe;
		
		if (pe == 'E') {
			pares[tam].first++;
		} else {
			pares[tam].second++;
		}
		
	}
	
	int paresPossiveis = 0;
	
	for (int i = 0; i < pares.size(); i++) {
		paresPossiveis += min(pares[i].first, pares[i].second);
	}
	
	cout << paresPossiveis << endl;
	
	return 0;
	
}
