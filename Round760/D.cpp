#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

int main(){
    int t, n, k, aux;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        vector<int> arr;
        int sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &aux);
            sum += aux;
            arr.push_back(aux);
        }
        sort(arr.rbegin(), arr.rend());
        priority_queue<int, vector<int>, less<int>> pq, pq2;
        for(int i = 0; i < arr.size(); i++){
            if(i < k){
                //printf("^^%d\n", arr[i]);
                pq.push(arr[i]);
            }else{
                //printf("--%d\n", arr[i]);
                pq2.push(arr[i]);
            }
        }
        while(!pq.empty()){
            int max1 = pq.top(); pq.pop();
            int max2 = pq2.top(); pq2.pop();
            int dif = max1 + max2;
            if(max1 == max2) dif--;
            sum -= dif;
        }

        printf("%d\n", sum);
    }
    return 0;
}
