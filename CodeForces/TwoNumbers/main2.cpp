#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int m; cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int maxA = *max_element(A.begin(), A.end());
    int maxB = *max_element(B.begin(), B.end());

    cout << maxA << " " << maxB << endl; // E garantido que a soma dos dois maiores elementos dos arrays nao estara em nenhum deles, uma vez que estamos trabalhando apenas com numeros positivos

    return 0;

}
