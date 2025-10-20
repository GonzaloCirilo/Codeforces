#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    scanf("%d", &t);
    string ss;
    while (t--) {
        scanf("%d %d\n", &n, &k);
        cin >> ss;
        int ans = 0, lastK = -1;
        for (int i = 0; i < n; i++) {
            if (ss[i] == '1') {
                if (lastK == -1 || i - lastK >= k)
                    ans++;
                lastK = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}