#include <stdio.h>
using namespace std;

int main(){
    int t, k;
    scanf("%d", &t);
    while(t--){
        int arr[53] = {};
        scanf("%d", &k);
        int sum = 0;
        for(int i = 0; i < k; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        if(sum >= k){
            if(sum == k)
                printf("0\n");
            else{
                printf("%d\n", sum - k);
            }
        } else {
            printf("%d\n", 1);
        }
    }
}