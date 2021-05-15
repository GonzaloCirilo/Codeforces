#include <stdio.h>
#include <vector>
using namespace std;
typedef pair<int, int> ii;

void solve(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(b == 1) {
        printf("NO\n");
        return;
    }
    long long x = b, y = b + 1, z = x + y;
    if(z % b == 0)
        x = 1; y = b - 1; z = b;
    printf("YESs\n%lld %lld %lld\n", x * a, y * a, z * a);
    return;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}
/*
12
5 3
13 2
7 11
2 4
2 5
3 1
4 1
1 3
1 4
3 3
128 2
4 2
*/