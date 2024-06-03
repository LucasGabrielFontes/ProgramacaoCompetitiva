#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (; t > 0; t--) {

        string seqProibida, bracelete;
        cin >> seqProibida >> bracelete;

        string seqProibidaReversa = seqProibida;
        reverse(seqProibidaReversa.begin(), seqProibidaReversa.end());

        string braceleteDouble = bracelete + bracelete;

        if (braceleteDouble.find(seqProibida) != string::npos || braceleteDouble.find(seqProibidaReversa) != string::npos) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }

    }

    return 0;

}
