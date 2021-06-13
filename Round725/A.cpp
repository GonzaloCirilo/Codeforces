#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>
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
        auto itMax = max_element(arr.begin(), arr.end()), itMin = min_element(arr.begin(), arr.end());
        int indexMax = distance(arr.begin(), itMax) + 1, indexMin = distance(arr.begin(), itMin) + 1;
        int d = abs(indexMax - indexMin);
        //printf("%d %d %d\n", indexMax, indexMin, d);

        int toMin = min(indexMin, n - indexMin + 1);
        int toMax = min(indexMax, n - indexMax + 1);
        int ans = min(toMin + d, toMax + d);
        ans = min(ans, toMin + toMax);
        printf("%d\n", ans);
        
    }
    return 0;
}