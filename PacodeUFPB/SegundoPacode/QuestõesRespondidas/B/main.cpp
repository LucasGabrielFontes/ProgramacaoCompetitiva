#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    long long result = 2;
    for (int i = 1; i < n; i++) {
        result = (result*2)%1000000007;
    }

    cout << result << endl;

    return 0;
}
