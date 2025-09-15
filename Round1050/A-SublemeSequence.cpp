#include <stdio.h>
using namespace std;

int main() {
    int t, x, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &n);
        if (n % 2 == 0) {
            printf("0\n");
        } else {
            printf("%d\n", x);
        }
    }
    return 0;
}