#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    long long n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &n);

       n = n % 2  == 0?  n : n + 1;
       n = max(n, (long long)6);

       printf("%lld\n", (long long)(n * 2.5));

    }
    return 0;
}