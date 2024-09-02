#include <bits/stdc++.h>

using namespace std;

void dfsUtil (int vertice, vector<bool> &visitado, vector<vector<int>> &grafo) {

    visitado[vertice] = true;

    for (int i: grafo[vertice]) {
        if (!visitado[i]){
            dfsUtil(i, visitado, grafo);
        }
    }

}

void dfs (int numVertices, vector<vector <int>> &grafo, int &cont) {

    vector<bool> visitado(numVertices, false);

    for (int i = 0; i < numVertices; i++) {
        if (!visitado[i]) {
            cont++;
            dfsUtil(i, visitado, grafo);
        }
    }

}

int main(){

    int pessoas, relacoes; cin >> pessoas >> relacoes;
    vector<vector<int>> grafo(pessoas);
    int cont = 0;

    for (int i = 0; i < relacoes; i++) {
        int pessoa1, pessoa2; cin >> pessoa1 >> pessoa2;
        grafo[pessoa1-1].push_back(pessoa2-1);
        grafo[pessoa2-1].push_back(pessoa1-1);
    }

    dfs(pessoas, grafo, cont);

    cout << cont << endl;

    return 0;
}