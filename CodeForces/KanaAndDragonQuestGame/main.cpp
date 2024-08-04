#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int x; // Hit point of the Dragon
        int n; // Maximum number of Void Absorptions
        int m; // Maximum number of Lightning Strikes. Se m == 0, nunca sera possivel ganhar
        cin >> x >> n >> m;

        while (n > 0) { // Gasta todas as magias Void Absorptions até que o Hit point entre em um loop onde nao mais diminui
            int life_after_n = floor(x/2) + 10;

            if (life_after_n == x || life_after_n > x) break; // Teste do loop feito aqui

            x = life_after_n;
            n--;
        }

        while (m > 0) { // Gasta todas as Lightning Strikes ate que o Hit point seja <= 0 ou as magias acabem

            int life_after_m = x-10;

            x = life_after_m;
            m--;

            if (x <= 0) break;
        }

        if (x <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}