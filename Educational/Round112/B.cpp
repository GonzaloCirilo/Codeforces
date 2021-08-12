#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int t, w, h, x1, x2, y1, y2, W, H;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d %d %d %d %d %d", &W, &H, &x1, &y1, &x2, &y2, &w, &h);
        int difTop = H - y2, difBottom = y1, difLeft = x1, difRight = W - x2;

        //printf("%d %d %d %d %d %d\n", difTop, difBottom, difLeft, difRight, w, h);
        bool possible = (difTop + difBottom) >= h || (difRight + difLeft) >= w;

        
        int ans = 1e9;
        if((difTop + difBottom) >= h){// gotta move y
            ans = min(max(h - difTop, 0), max(h - difBottom, 0));
        }
            
        if ((difLeft + difRight) >= w){// gotta move x
            ans = min(ans, min(max(w - difRight, 0), max(w - difLeft, 0)));
        }
        if(ans == 1e9){
            printf("-1\n");
        }else{
            printf("%lf\n", (double)ans);
        }
        
    }

    return 0;
}