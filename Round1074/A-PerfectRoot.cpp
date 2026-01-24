#include <cstdio>
#include <stdio.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            if (i != 0)
                printf(" ");
            printf("%d", i + 1);
        }
        printf("\n");
    }
    return 0;
}