// Código em construcao. Wrong answer no teste 7 do code forces - ainda.

#include <bits/stdc++.h>

using namespace std;

int main() {

    string str; cin >> str;

    long long int cont = 0; // Impar ele ganha

    for (long long int i = 0; i < str.size()-1; i++) {
        
        char carac1 = '\n';
        char carac2 = '\0';
        int teste_par = 0;

        if (str[i] == str[i+1]) {

            if (i-1 >= 0) carac1 = str[i-1];
            else carac1 = '\0';

            while (str[i] == str[i+1]) {
                cont++;
                teste_par++;

                if (i+2 > str.size()-1) break;
                i+=2;
                carac2 = str[i]; 
            }

            if (i < str.size()) carac2 = str[i];
            else carac2 = '\0';

            if (carac1 != '\0' && carac2 != '\0' && teste_par%2 == 0 && carac1 == carac2) cont++;

        }

    }

    if (cont%2 == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}