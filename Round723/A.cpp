#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        int arr[51] = {}, aux[51] = {};
        scanf("%d", &n);
        for(int i = 0; i < n * 2; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr + 0, arr + 2 * n);
        for(int i = 0; i < n * 2; i++){
            int index = (i * 2) % (2 * n) + (i >= n ? 1 : 0);
            //printf("====%d %d\n", index, i);
            aux[index] = arr[i];
        }
        for(int i = 0; i < n * 2; i++){
            if(i != 0) printf(" ");
            printf("%d", aux[i]);
        }
        printf("\n");
    }
    return 0;
}