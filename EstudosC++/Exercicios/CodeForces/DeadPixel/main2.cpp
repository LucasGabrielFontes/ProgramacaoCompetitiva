#include <iostream>
#include <algorithm>

using namespace std;

int main () {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int a, b, x, y;
        cin >> a >> b >> x >> y;
        x++;
        y++;

        int maxArea = max({(x-1)*b, a*(b-y), (a-x)*b, a*(y-1)});
        cout << maxArea << endl;

    }

    return 0;
}