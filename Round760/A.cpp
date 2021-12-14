#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n, arr[7];
    scanf("%d", &n);
    while(n--){
        for(int i = 0; i < 7; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr+7);
        int sum = arr[0] + arr [1];
        printf("%d %d ", arr[0], arr[1]);
        bool skipped = false;
        for(int i = 2; i < 7; i++){
            if(sum != arr[i] || skipped){
                printf("%d\n", arr[i]);
                break;
            }else{
                skipped = true;
            }
        }
    }
    return 0;
}