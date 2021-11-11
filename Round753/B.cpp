#include <stdio.h>

int main() {
    int t;
    long long x, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%lld %lld", &x, &n);
        long long ans = x, delta = 0;
        if (n % 4 == 0) {
            delta = 0;
        } else if (n % 4 == 1) {
            delta = (((n/4) * 4) + 1) * -1;
        } else if (n % 4 == 2) {
            delta = 1;
        } else {
            delta = n + 1;
        }
        if (x % 2) {
            delta *= -1;
        }
        printf("%lld\n", ans + delta);
    }
    return 0;
}