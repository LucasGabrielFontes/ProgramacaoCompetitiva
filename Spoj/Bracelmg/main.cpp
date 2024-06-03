#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    for (; t > 0; t--) {

        bool has = true;
        string seqProibida, bracelete;
        cin >> seqProibida >> bracelete;

        for (int i = 0; i < bracelete.size(); i++) {

            if (bracelete[i] == seqProibida[0]) {

                int teste = 1;
                int cont = (i + 1) > bracelete.size() - 1 ? 0 : i + 1;

                while (teste < seqProibida.size()) {

                    if (bracelete[cont] != seqProibida[teste]) {
                        has = false;
                        break;
                    }

                    cont = (cont + 1) > bracelete.size() - 1 ? 0 : cont + 1;
                    teste++;

                }

                if (teste == seqProibida.size()) {
                    has = true;
                    break;
                }

            }

        }

        if (has) {
            cout << "S" << endl;
        } else {

            for (int i = (int) bracelete.size() - 1; i-1 >= 0; i--) {

                if (bracelete[i] == seqProibida[0]) {

                    int teste = 1;
                    int cont = (i - 1) < 0 ? (int) bracelete.size() - 1 : i - 1;

                    while (teste < seqProibida.size()) {

                        if (bracelete[cont] != seqProibida[teste]) {
                            has = false;
                            break;
                        }

                        cont = (cont - 1) < 0 ? (int) bracelete.size() - 1 : cont - 1;
                        teste++;

                    }

                    if (teste == seqProibida.size()) {
                        has = true;
                        break;
                    }

                }

            }

            if (has) {
                cout << "S" << endl;
            } else {
                cout << "N" << endl;
            }

        }

    }

    return 0;

}
