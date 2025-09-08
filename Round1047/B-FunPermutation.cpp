#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int t, n, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr.push_back(a);
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (i != 0)
                printf(" ");
            printf("%d", n + 1 - arr[i]);
        }
        printf("\n");
    }
    return 0;
}