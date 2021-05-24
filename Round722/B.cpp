#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> arr = vector<int>(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr.begin(), arr.end());
        int mindif = 1e9 + 3;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > 0)
                break;
            int aux = (arr[i] - arr[i + 1]) * (arr[i] - arr[i + 1] < 0 ? -1 : 1);
            if(mindif > aux)
                mindif = aux;
        }
        int ans = 0;
        //printf("====%d\n", mindif);
        for(int i = 0; i < n; i++){
            if(mindif < arr[i])
                break;
            ans++;
            if(arr[i] > 0)
                break;
        }
        printf("%d\n", ans);
       
    }
}
