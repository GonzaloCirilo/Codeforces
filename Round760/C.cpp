#include <stdio.h>
#include <numeric>
using namespace std;
int t, n; long long arr[101] = {};

void solve(){
    scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
        }
        long long gcdP = arr[0], gcdI = arr[1];

        for(int i = 2; i < n; i++){
            if(i % 2 == 0){
                gcdP = gcd(gcdP, arr[i]);
            }else{
                gcdI = gcd(gcdI, arr[i]);
            }
        }
        //printf("%lld %lld\n", gcdP, gcdI);

        bool iValid = true;
        for(int i = 0; i < n; i+=2){
            if(arr[i] % gcdI == 0){
                iValid = false;
                break;
            }
        }
        if(iValid){
            printf("%lld\n", gcdI);
            return;
        }
        bool pValid = true;
        for(int i = 1; i < n; i+=2){
            if(arr[i] % gcdP == 0){
                pValid = false;
                break;
            }
        }
        if(pValid){
            printf("%lld\n", gcdP);
            return;
        }
        printf("0\n");
}

int main(){
    scanf("%d", &t);
    while(t--){
        solve();

    }
    return 0;
}