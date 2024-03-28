#include <stdio.h>

int main () {
    long long int x = 1, m = 1;
    scanf("%lld %lld", &x, &m);
    if (x != 0 && m != 0) {
        printf("%lld\n", x*m);
        do {
            scanf("%lld %lld", &x, &m);
            if (x != 0 && m != 0) {
                printf("%lld\n", x*m);
            }
        } while (x != 0 || (m != 0));
    }
    return 0;
}