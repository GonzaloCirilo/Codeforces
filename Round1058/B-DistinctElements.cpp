#include <stdio.h>
#include <vector>
using namespace std;
int main() {
    int t, n;
    long long b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<long long> arr = vector<long long>();
        for (int i = 0; i < n; i++) {
            scanf("%lld", &b);
            arr.push_back(b);
        }
        int ct = 1;
        vector<int> ans = vector<int>();
        ans.push_back(ct);
        int mul = -1;
        for (int i = 1; i < n; i++) {
            long long delta = arr[i] - arr[i - 1];
            if (delta == i + 1) {
                ans.push_back(++ct);
            } else {
                ans.push_back(ans[i - delta]);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (i != 0)
                printf(" ");
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    return 0;
}