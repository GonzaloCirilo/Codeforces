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
        int mine = 99999;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] < mine)
                mine = arr[i];
        }
        //int mine = *min(arr.begin(), arr.end());
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            //printf("====%d %d\n", mine, arr[i]);
            if(arr[i] > mine)
                ans++;
        }
        printf("%d\n", ans);

    }
    return 0;
}