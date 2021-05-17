#include <stdio.h>
#include <numeric>
using namespace std;
int main(){
    int t, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &k);
        printf("%d\n", 100 / gcd(100, k));  
    }
    return 0;
}