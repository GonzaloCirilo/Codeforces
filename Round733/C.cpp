#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main(){
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        vector<int> a = vector<int>(n), b = a, pa = a, pb = b;
        int skipped = n /4, index = n -  skipped - 1;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        pa[0] = a[0], pb[0] = b[0];
        for(int i = 1; i < n; i++){
            pa[i] = pa[i-1] + a[i];
            pb[i] = pb[i-1] + b[i];
        }
        int ans = 0, current = pa[index], liya = pb[index], h = 0;
        //printf("0: %d %d\n", current, liya);
        while(h + current < pb[index]){
            ans++;
            n++;
            if(n % 4 == 0){
                skipped++;
            }else{
                if(index != pb.size() - 1){
                    index++;
                }
            }
            if(pa.size() - skipped - 1 < 0){
                current = 0;
            }else{
                current = pa[pa.size() - skipped - 1];
            }
            h += 100;
            //printf("%d %d: %d %d\n", skipped, n, current + h, pb[index]);
        }
        printf("%d\n", ans);
 
    }
    return 0;
}