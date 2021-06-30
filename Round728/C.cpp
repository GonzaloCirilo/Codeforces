#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        vector<int> d = vector<int>(n);
        vector<long long> dp = vector<long long>(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &d[i]);
        }
        sort(d.begin(), d.end());

        long long ans = d[n - 1], s = 0;

        for(int i = 1; i < n; i++){
            dp[i] += 1LL * (d[i] - d[i - 1]) * i + dp[i - 1];
            //printf("=== %lld\n", dp[i]);
            ans -= dp[i];
        }

        printf("%lld\n", ans);

    }
    return 0;
}