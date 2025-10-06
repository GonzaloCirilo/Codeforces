#include <stdio.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        if (n == 1) {
            if (k == 1) {
                printf("YES\n");
                printf("U");
            } else {
                printf("NO\n");
            }
        } else {
            if (k == (n * n) - 1) {
                printf("NO\n");
            } else {
                printf("YES\n");
                int kCount = 0, loopCount = 0;
                ;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (kCount < k) {
                            printf("U");
                            kCount++;
                        } else {
                            if (loopCount == 0 && j == n - 1) {
                                printf("D");
                            } else if (j == n - 1) {
                                printf("L");
                            } else {
                                printf("R");
                            }
                            loopCount++;
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}