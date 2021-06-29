#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> arr = vector<int>(n + 1);
        for(int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int k = arr[i]; k <= 2 * n; k += arr[i]){
                int j = k - i;
                if(i < j && j <= n && i + j == (long long)arr[i] * arr[j]){
                    //printf("==== %d %d\n", i, j);
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

