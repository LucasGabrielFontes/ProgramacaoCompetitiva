#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dist(vector<int> ids, vector<int> ids1) {
        sort(ids.begin(), ids.end());
        sort(ids1.begin(), ids1.end());

        int distance = 0;

        for(unsigned int i = 0; i < ids.size(); i++) {
            distance += abs(ids[i] - ids1[i]);
        }

        return distance;
    }

    int similarity(vector<int> ids, vector<int> ids1){
        int simil = 0;
        for (unsigned int i = 0; i < ids.size(); i++) {
            int reps = 0;
            for (unsigned int j = 0; j < ids1.size(); j++) {
                if (ids1[j] == ids[i]) {
                    reps++;
                }
            }
            simil += ids[i]*reps;
        }

        return simil;
    }
};

int main(){

    vector<int> ids;
    vector<int> ids1;
    int a, b;

    cin >> a;
    cin >> b;
    while (a != -1 && b != -1) {
        ids.push_back(a);
        ids1.push_back(b);
        cin >> a;
        cin >> b;
    }

    Solution sol;

    int distance = sol.dist(ids, ids1);
    int similarity = sol.similarity(ids, ids1);

    cout << "Total distance: " << distance << endl;
    cout << "Similarity: " << similarity << endl;

    return 0;
}