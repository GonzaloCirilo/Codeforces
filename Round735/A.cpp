#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> arr = vector<int>(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        long long ans = 0; 
        for(int i = 0; i < n - 1; i++){
            ans = max(1LL * arr[i] * arr[i+1], ans);
        }
        printf("%lld\n", ans);
    }
    return 0;
}