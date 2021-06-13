#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> arr = vector<int>(n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if(sum % n != 0){
            printf("-1\n");
            continue;
        }
        long long d = sum / n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > d)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}