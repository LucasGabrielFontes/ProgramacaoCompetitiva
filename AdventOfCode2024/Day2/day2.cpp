// 536

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int reportsSafe(vector<vector<int>> reports){

        int repsSafe = 0;
        for (unsigned int i = 0; i < reports.size(); i++) {
            bool safe = true;
            bool grow = reports[i][0] < reports[i][1] ? true : false;
            for (unsigned int j = 0; j < reports[i].size()-1; j++) {
                int k = j+1;
                if ((grow && reports[i][j] > reports[i][k]) || (!grow && reports[i][j] < reports[i][k]) || (abs(reports[i][j] - reports[i][k]) > 3) || (abs(reports[i][j] - reports[i][k]) < 1)) {
                    safe = false;
                }
            }
            if (safe) {
                repsSafe++;
                cout << "SIM" << endl;
            } else {
                cout << endl << endl << endl << endl;
                for (unsigned int del = 0; del < reports[i].size(); del++) {
                    safe = true;
                    if (del == 0) {
                        grow = reports[i][1] < reports[i][2] ? true : false;
                    } else if (del == 1) {
                        grow = reports[i][0] < reports[i][2] ? true : false;
                    } else {
                        grow = reports[i][0] < reports[i][1] ? true : false;
                    }
                    for (unsigned int j = 0; j < reports[i].size()-1; j++) {
                        unsigned int k = j+1;
                        if (j == del) {
                            continue;
                        }
                        if (k == del) { // O último elemento só pode cair aqui
                            if (k+1 < reports[i].size()) {
                                k++;
                            } else {
                                continue;
                            }
                        }
                        cout << reports[i][j] << " " << reports[i][k] << "    ";
                        if ((grow && reports[i][j] > reports[i][k]) || (!grow && reports[i][j] < reports[i][k]) || (abs(reports[i][j] - reports[i][k]) > 3) || (abs(reports[i][j] - reports[i][k]) < 1)) {
                            safe = false;
                        }
                    }
                    if (safe) {
                        repsSafe++;
                        cout << "SIM" << endl;
                        break;
                    }
                }
            }
        }

        return repsSafe;
    }
};

int main(){

    vector<vector<int>> input;

    string line;
    getline(cin, line);   
    int num;
    int cont = 0;

    while (line != "-1") {  
        stringstream ss(line);
        input.push_back({});
        while (ss >> num) {
            input[cont].push_back(num);
        }
        getline(cin, line);
        cont ++;
    }

    Solution sol;
    int totalReportsSafe = sol.reportsSafe(input);
    cout << "\nTotal reports safe: " << totalReportsSafe << endl;

    return 0;
}