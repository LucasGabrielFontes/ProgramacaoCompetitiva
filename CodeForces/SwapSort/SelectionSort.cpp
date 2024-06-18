// Algoritmo de ordenacao por selecao: realiza a menor quantidade de trocas

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> vetor(n);

    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < n; i++) {

        int index = i;

        for (int j = i+1; j < n; j++) {
            if (vetor[index] > vetor[j]) {
                index = j;
            }
        }

        if (index != i) {
            swap(vetor[i], vetor[index]);
        }

    }

    cout << "Vetor ordenado: " << endl;

    for (int i = 0; i < n; i++) {
        cout << vetor[i];
    }

    return 0;

}