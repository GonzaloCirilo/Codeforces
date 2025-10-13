#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int t, n, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<int> arr = vector<int>(101, 0);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr[a]++;
        }
        for (int i = 0; i <= 100; i++) {
            if (arr[i] == 0) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}