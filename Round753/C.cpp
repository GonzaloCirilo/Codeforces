#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        vector<long long> arr = vector<long long>(n);
        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        sort(arr.begin(), arr.end());
        long long ans = -1e10, acc = 0;
        for(int i = 0; i < arr.size(); i++) {
            ans = max(ans, arr[i] - acc);
            acc += (arr[i] - acc);
            //printf("%lld /", acc);
        }
        printf("%lld\n", ans);
    }
    return 0;
}