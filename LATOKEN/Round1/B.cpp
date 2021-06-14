#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    vector<int> arr;
    while(t--){
        scanf("%d", &n);
        arr = vector<int>(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        arr.push_back(0);
        long long ugly = 0, op = 0;
        int aux = 0;
        for(int i = 0; i < n + 1; i++){
            if(arr[i] > aux && arr[i] > arr[i + 1]){
                int h = max(aux, arr[i+1]);
                op += abs(arr[i] - h);
                arr[i] = h;
            }
            aux = arr[i];
        }
        aux = 0;
        for(int i = 0; i < n + 1; i++){
            //printf("%d ", arr[i]);
            ugly += abs(aux - arr[i]);
            aux = arr[i];
        }
        //printf("\n");
        printf("%lld\n", ugly + op);
    }
    return 0;
}