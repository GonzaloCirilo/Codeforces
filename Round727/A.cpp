#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int k, n, x, t;
    scanf("%d", &k);
    while (k--){
        scanf("%d %d %d", &n, &x, &t);

        if(t < x){
            printf("0\n");
            continue;
        }

        int aux = t / x; 
        //printf("aux: %d\n", aux);
        // s: from 1 to t / x the sum of distisfaction is  the sum of a progression
        // c: from t/x + 1 onwards is a sum of the constant value t / x
        long long s =(1LL * (min(n, aux) - 1) * min(n, aux)/ 2), c = (1LL * max(n - aux, 0) * aux);
        printf("%lld\n", s + c);
    }
    
    return 0;
}