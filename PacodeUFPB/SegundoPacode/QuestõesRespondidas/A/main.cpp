#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    if (K > N) {
        if (K%N != 0) {
            cout << K/N + 1 << endl;
        } else {
            cout << K/N << endl;
        }
    } else{
        cout << 1 << endl;
    }

    return 0;
}
