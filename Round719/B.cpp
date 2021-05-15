#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
int countdigits(int n){
    int ans = 0;
    while(n){
        int d = n % 10;
        n /= 10;
        ans++;
    }
    return ans;
}

int main(){
    int t;
    scanf("%d", &t);
    int n;
    vector<int> ord;
    while(t--){
        scanf("%d", &n);
        int d = countdigits(n);
        int ans = (d-1) * 9;
        int base = 0;
        for(int i = 0; i < d; i++){
            base *= 10;
            base += 1;
        }
        int ind = base;
        while(ind <= n){
            ans++;
            ind += base;
        }
        printf("%d\n", ans);
    }

    return 0;
}