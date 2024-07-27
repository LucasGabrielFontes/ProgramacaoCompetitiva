#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (; t > 0; t--) {

        int n, m; cin >> n >> m;

        vector<vector<char>> quadro(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i+j)%2 == 0) {
                    quadro[i].push_back('B');
                } else {
                    quadro[i].push_back('W');
                }
            }
        }

        if ((n*m)%2 == 0) {
            quadro[0][1] = 'B';
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << quadro[i][j];
            }
            cout << endl;
        }

    }

    return 0;

}