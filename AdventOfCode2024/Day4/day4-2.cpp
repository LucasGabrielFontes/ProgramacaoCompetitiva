#include <bits/stdc++.h>

// 2370

using namespace std;

class Solution{
public:
    int amount = 0;

    void ceresSearch(vector<string>& str){

        for (unsigned i = 0; i < str.size(); i++) {
            for (unsigned j = 0; j < str[i].size(); j++) {
                if (str[i][j] == 'A') {
                    test1(str, i, j);
                    test2(str, i, j);
                    test3(str, i, j);
                    test4(str, i, j);
                }
            }
        }

    }

    void test1(vector<string>& str, unsigned int i, unsigned int j){

        if (i < 1)
            return;
        
        if (i+1 > str.size()-1)
            return;

        if (j < 1)
            return;
        
        if (j+1 > str[i].size()-1)
            return;

        if (str[i-1][j-1] != 'M') 
            return;
        
        if (str[i-1][j+1] != 'M')
            return;

        if (str[i+1][j-1] != 'S')
            return;

        if (str[i+1][j+1] != 'S')
            return;

        amount++;
    }

    void test2(vector<string>& str, unsigned int i, unsigned int j){

        if (i < 1)
            return;
        
        if (i+1 > str.size()-1)
            return;

        if (j < 1)
            return;
        
        if (j+1 > str[i].size()-1)
            return;

        if (str[i-1][j-1] != 'S') 
            return;
        
        if (str[i-1][j+1] != 'S')
            return;

        if (str[i+1][j-1] != 'M')
            return;

        if (str[i+1][j+1] != 'M')
            return;

        amount++;
    }

    void test3(vector<string>& str, unsigned int i, unsigned int j){

        if (i < 1)
            return;
        
        if (i+1 > str.size()-1)
            return;

        if (j < 1)
            return;
        
        if (j+1 > str[i].size()-1)
            return;

        if (str[i-1][j-1] != 'M') 
            return;
        
        if (str[i-1][j+1] != 'S')
            return;

        if (str[i+1][j-1] != 'M')
            return;

        if (str[i+1][j+1] != 'S')
            return;

        amount++;
    }

    void test4(vector<string>& str, unsigned int i, unsigned int j){

        if (i < 1)
            return;
        
        if (i+1 > str.size()-1)
            return;

        if (j < 1)
            return;
        
        if (j+1 > str[i].size()-1)
            return;

        if (str[i-1][j-1] != 'S') 
            return;
        
        if (str[i-1][j+1] != 'M')
            return;

        if (str[i+1][j-1] != 'S')
            return;

        if (str[i+1][j+1] != 'M')
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

    cout << "Quantidade de X-MASes: " << sol.amount << endl;

    return 0;
}