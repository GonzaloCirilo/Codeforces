#include <stdio.h>
using namespace std;
int main() {
    int t, x, y;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &y);
        //printf("%d %d: ", x, y);
        if (x == y) {
            printf("%d\n", -1);
        } else if (x > y) {
            if (y == 1 || x - y <= 1) {
                printf("%d\n", -1);
            } else {
                printf("3\n");
            }
        } else if (y > x) {
            printf("2\n");
        }
    }
    return 0;
}