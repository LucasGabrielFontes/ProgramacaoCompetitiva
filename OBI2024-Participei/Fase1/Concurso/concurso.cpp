#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    int K;

    cin >> N >> K;

    vector<int> notas(N);

    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end());
    reverse(notas.begin(), notas.end());

    cout << notas[K-1] << endl;

    return 0;

}
