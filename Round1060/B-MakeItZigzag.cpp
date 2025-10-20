#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    long long a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<long long> arr;
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a);
            arr.push_back(a);
        }

        long long ans = 0, maxe = -1;
        for (int i = 0; i < n; i++) {
            maxe = max(maxe, arr[i]);
            int id = i + 1;
            if (id % 2 == 0) {
                arr[i] = maxe;
            }
        }

        for (int i = 0; i < n; i++) {
            int id = i + 1;
            if (id % 2 == 1) {
                long long l = (i > 0) ? arr[i - 1] : 1e18, r = (i < n - 1) ? arr[i + 1] : 1e18;
                long long mine = min(l, r);
                if (arr[i] >= mine) {
                    ans += arr[i] - mine + 1;
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}