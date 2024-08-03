#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; i++) {

        int x; // Hit point of the Dragon
        int n; // Maximum number of Void Absorptions
        int m; // Maximum number of Lightning Strikes

        cin >> x >> n >> m;

        while (m > 0) {

            int magicM = floor(x/2) + 10; // Quanto fica a vida do dragao depois de ser atacado pela magia M
            int magicN = x-10;

            if (magicN < magicM) {
                x = magicN;
                break;
            }
            if (magicM == x) break; 

            x = magicM;
            m--;            

        }

        while(n > 0) {
            int magicN = x-10;

            x = magicN;

            if (x <= 0) break;
        }

        if (x <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}