#include <iostream>

using namespace std;

int main () {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int a, b, x, y;
        cin >> a;
        cin >> b;
        cin >> x;
        cin >> y;

        x++;
        y++;

        int areaMax = 0;

        if (x <= a/2) {

            if (y <= b/2) {

                areaMax = (a-x)*b;

                if (a*(b-y) > areaMax) {

                    areaMax = a*(b-y);

                }

            } else {

                areaMax = (a-x)*b;

                if (a*(y-1) > areaMax) {

                    areaMax = a*(y-1);

                }

            }

        } else {

            if (y <= b/2) {

                areaMax = (x-1)*b;

                if (a*(b-y) > areaMax) {

                    areaMax = a*(b-y);

                }

            } else {

                areaMax = (x-1)*b;

                if (a*(y-1) > areaMax) {

                    areaMax = a*(y-1);

                }

            }

        }

        cout << areaMax << endl;

    }

    return 0;

}
