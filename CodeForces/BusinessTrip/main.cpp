#include <bits/stdc++.h>

using namespace std;

int main() {

    int k;
    cin >> k;
    vector <int> meses;

    for (int i = 0; i < 12; i++) {
        int num;
        cin >> num;
        meses.push_back(num);
    }

    sort(meses.begin(), meses.end());

    int min = 0;
    int grow = 0;

    for (int i = meses.size() - 1; i >= 0; i--) {

        if (grow >= k) {
            break;
        }

        grow += meses[i];
        min++;

    }

    if (grow < k) {
        min = -1;
    }
    cout << min << endl;

    return 0;
}
