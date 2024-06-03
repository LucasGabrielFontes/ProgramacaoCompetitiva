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

    pair<int, int> par;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            par.first = A[i];
            par.second = B[j];

            int soma = par.first + par.second;

            if (find(A.begin(), A.end(), soma) == A.end() && find(B.begin(), B.end(), soma) == B.end()) {
                break;
                i = n;
            }
        }
    }

    cout << par.first << " " << par.second << endl;

    return 0;

}
