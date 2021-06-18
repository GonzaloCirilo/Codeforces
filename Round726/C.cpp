#include <stdio.h>
#include <vector>
#include <algorithm>
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
        sort(arr.begin(), arr.end());
        int aux = arr[0], dif = 0, si = -1, ei = -1, mind = 1e9 + 17;
        for(int i = 1; i < n; i++){
            dif = arr[i] - aux;
            if(dif < mind){
                si = i - 1 , ei = i;
                mind = dif;
            }
            aux = arr[i];
        }

        int s = arr[si], e = arr[ei];
        
        arr.erase(arr.begin() + si);
        arr.erase(arr.begin() + si);

        if(!arr.empty()){
            printf("%d ", s);
            for(int i = si; i < arr.size(); i++){
                printf("%d ", arr[i]);
            }
            for(int i = 0; i < si; i++){
                printf("%d ", arr[i]);
            }
            printf("%d\n", e);
        }else{
            printf("%d %d\n", min(s, e), max(s, e));
        }
    }
    return 0;
}