#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, ai;
        scanf("%d", &n);
        vector<int> arr = vector<int>(101, 0);
        for (int i = 0; i < n; i++) {
            scanf("%d", &ai);
            arr[ai]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int count = 0;
            for (int j = 1; j <= 100; j++) {
                if (arr[j] >= i) {
                    count++;
                }
            }
            ans = max(ans, count * i);
        }
        printf("%d\n", ans);
    }
    return 0;
}