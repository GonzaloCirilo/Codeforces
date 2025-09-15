#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<int> evens, odds;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a % 2 == 0) {
                evens.push_back(a);
            } else {
                odds.push_back(a);
            }
        }
        if (odds.size() == 0) {
            printf("0\n");
            continue;
        }
        sort(evens.rbegin(), evens.rend());
        sort(odds.rbegin(), odds.rend());
        for (int i = 0; i < evens.size(); i++) {
            ans += evens[i];
        }
        int m = 0;
        if (odds.size() % 2 == 0) {
            m = odds.size() / 2;
        } else {
            m = odds.size() / 2 + 1;
        }
        for (int i = 0; i < m; i++) {
            ans += odds[i];
        }
        printf("%lld\n", ans);
    }
    return 0;
}