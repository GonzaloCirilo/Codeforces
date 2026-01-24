#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int t, n, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int maxe = -1;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            maxe = max(maxe, a);
        }
        printf("%d\n", maxe * n);
    }
    return 0;
}