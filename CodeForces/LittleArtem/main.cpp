#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (; t > 0; t--) {

        int n, m; cin >> n >> m;

        vector<vector<char>> quadro(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                quadro[i].push_back('B');
            }
        }

        quadro[0][0] = 'W';

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                cout << quadro[i][j];
            }
            cout << endl;
        }

    }

    return 0;
}