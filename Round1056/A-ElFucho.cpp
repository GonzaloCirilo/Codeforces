#include <stdio.h>
using namespace std;

// 4 6
// 5 8
// 6 10

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", (n - 1) * 2);
    }
    return 0;
}

/**
 * 0 6
 * 3 3 3
 * 5 2 4
 * 8 1 2
 * 9 1 1
 * 10
*/