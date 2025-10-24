#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int ans = (n % 2 == 0) ? (n - 2) / 2 : ((n - 1) / 2);
        printf("%d\n", ans);
    }
    return 0;
}