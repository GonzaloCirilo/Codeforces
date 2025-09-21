#include <stdio.h>
using namespace std;
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int nCopy = n;
        printf("%d", nCopy);
        while (nCopy--) {
            if (nCopy == 0)
                break;
            printf(" %d", nCopy);
        }
        printf(" %d", n);
        for (int i = 1; i < n; i++) {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}