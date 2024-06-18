// Utiliza o algoritmo de ordenacao por selecao

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> vetor(n);

    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    vector<pair<int, int>> trocas;

    for(int i = 0; i < n; i++){

        int index = i;

        for(int j = i+1; j < n; j++) {    // *
            if(vetor[index] > vetor[j]) {
                index = j;
            }
        }

        if(index != i) {
            pair<int, int> temp = {i, index};

            trocas.push_back(temp);

            swap(vetor[i], vetor[index]);
        }
    }

    cout << trocas.size() << endl;

    for(int i = 0; i < trocas.size(); i++) {
        cout << trocas[i].first << " " << trocas[i].second << endl;
    }

    return 0;

}