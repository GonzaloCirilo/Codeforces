#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int t, k, n, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        vector<int> occur = vector<int>(n + 1, 0), arr;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr.push_back(a);
            occur[a]++;
        }
        if (n % k != 0) {
            printf("0\n");
            continue;
        }
        bool end = false;
        vector<int> li = vector<int>(n + 1, 0);
        for (int i = 0; i < occur.size(); i++) {
            if (occur[i] % k != 0) {
                printf("0\n");
                end = true;
                break;
            }
            li[i] = occur[i] / k;
        }
        if (end)
            continue;

        long long ans = 0;
        vector<int> count = vector<int>(n + 1, 0);
        int r = 0;
        for (int l = 0; l < n; l++) {
            while (r < n && count[arr[r]] + 1 <= li[arr[r]]) {
                count[arr[r]]++;
                r++;
            }
            ans += r - l;
            if (l < r) {
                count[arr[l]]--;
            } else {
                r = l + 1;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}