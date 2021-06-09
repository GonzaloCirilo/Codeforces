#include <stdio.h>
#include <numeric>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, arr[2001] = {};
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(arr[i], arr[j] * 2) > 1 || gcd(arr[j], arr[i] * 2) > 1)
                    ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}