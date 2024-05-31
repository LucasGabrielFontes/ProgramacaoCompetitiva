#include <bits/stdc++.h>

using namespace std;

int main () {

    int num = 1998;
    int *ponteiro = &num; // o ponteiro precisa ser do mesmo tipo da variavel apontada
    // ponteiro = &num;
    
    (*ponteiro)++;
    
    cout << ponteiro << endl; // imprime o endereço apontado por ponteiro
    cout << *ponteiro << endl; // imprime o conteudo da variavel que ponteiro aponta
    cout << num << endl;

    return 0;

}
