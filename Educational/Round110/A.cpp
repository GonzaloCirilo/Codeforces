#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int s[4]= {}, aux[4] = {};
        scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
        int f1 = max(s[0], s[1]), f2 = max(s[2], s[3]);
        sort(s, s+4);
        if((f1 == s[2] && f2 == s[3]) || (f1 == s[3] && f2 == s[2]))
            printf("YES\n");
            else
            printf("NO\n");
    }
    return 0;
}