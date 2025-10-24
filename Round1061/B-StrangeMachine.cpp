#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int t, n, q;
    long long qi;
    scanf("%d\n", &t);
    while (t--) {
        scanf("%d %d\n", &n, &q);
        string s;
        cin >> s;
        bool allA = true;
        for (int i = 0; i < n; i++) {
            allA &= (s[i] == 'A');
        }
        for (int i = 0; i < q; i++) {
            scanf("%lld", &qi);
            if (allA) {
                printf("%lld\n", qi);
                continue;
            }
            int count = 0;
            long long ans = 0;
            while (qi) {
                //if (qi <= n) {
                if (s[count] == 'B') {
                    qi = (int)floor(qi / 2);
                } else {
                    qi--;
                }
                count = (count + 1) % n;
                ans++;
                //}
            }
            printf("%lld\n", ans);
        }
    }
    return 0;
}