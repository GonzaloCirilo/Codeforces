#include <stdio.h>
using namespace std;

int main() {
    int t;
    long long a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld %lld", &a, &b);
        long long ans = -1;
        if (a % 2 == 0 && b % 2 == 0) {
            ans = (a * b / 2) + (b / (b / 2));
        }
        if (a % 2 == 1 && b % 4 == 0) {
            ans = (a * b / 2) + (b / (b / 2));
        }
        if (a % 2 == 1 && b % 2 == 1) {
            ans = a * b + 1;
        }
        printf("%lld\n", ans);
    }
    return 0;
}