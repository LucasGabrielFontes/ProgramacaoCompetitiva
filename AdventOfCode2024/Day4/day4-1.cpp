#include <bits/stdc++.h>

// 2370

using namespace std;

class Solution{
public:
    int amount = 0;

    void ceresSearch(vector<string>& str){

        for (unsigned i = 0; i < str.size(); i++) {
            for (unsigned j = 0; j < str[i].size(); j++) {
                if (str[i][j] == 'X') {
                    direction(str, i, j, -1, -1);
                    direction(str, i, j, -1, 0);
                    direction(str, i, j, -1, 1);
                    direction(str, i, j, 0, -1);
                    direction(str, i, j, 0, 1);
                    direction(str, i, j, 1, -1);
                    direction(str, i, j, 1, 0);
                    direction(str, i, j, 1, 1);
                }
            }
        }

    }

    void direction(vector<string>& str, unsigned int i, unsigned int j, int a, int b){

        if (a == -1 && i < 3)
            return;
        
        if (a == 1 && i+3 > str.size() - 1)
            return;

        if (b == -1 && j < 3)
            return;
        
        if (b == 1 && j+3 > str[i].size() - 1)
            return;

        if (str[i+(1*a)][j+(1*b)] != 'M') 
            return;
        
        if (str[i+(2*a)][j+(2*b)] != 'A')
            return;

        if (str[i+(3*a)][j+(3*b)] != 'S')
            return;

        amount++;
    }
};

void leArquivo(vector<string>& input) {
    ifstream Arquivo("input.txt");

    if (!Arquivo.is_open()){
        cout << "Falha na abertura do arquivo!" << endl;
        exit(1);
    }

    string line;

    while (getline(Arquivo, line)) {
        input.push_back(line);
    }

    Arquivo.close();
}

int main(){

    vector<string> input;

    leArquivo(input);

    Solution sol;

    sol.ceresSearch(input);

    cout << "Quantidade de XMAS: " << sol.amount << endl;

    return 0;
}