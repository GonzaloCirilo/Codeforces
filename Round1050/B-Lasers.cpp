#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int t, n, m, x, y, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d", &n, &m, &x, &y);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a < y) {
                ans++;
            }
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &a);
            if (a < x) {
                ans++;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}