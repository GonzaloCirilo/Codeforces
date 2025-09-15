#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int t, n, m, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        int ct = 0, s = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &a, &b);
            if (s != b) {
                if ((a - ct) % 2 == 0) {
                    ans += (a - ct) - 1;
                } else {
                    ans += (a - ct);
                }
            } else {
                if ((a - ct) % 2 == 0) {
                    ans += (a - ct);
                } else {
                    ans += (a - ct) - 1;
                }
            }
            s = b;
            ct = a;
        }
        if (ct < m) {
            ans += m - ct;
        }
        printf("%d\n", ans);
    }
    return 0;
}