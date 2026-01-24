#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<int> arr = vector<int>();
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        int count = 1, ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] > 1) {
                ans = max(count, ans);
                count = 1;
                continue;
            }
            count += arr[i + 1] - arr[i] == 1;
            //printf("==i: %d %d\n", i, count);
        }
        ans = max(count, ans);
        printf("%d\n", ans);
    }
    return 0;
}