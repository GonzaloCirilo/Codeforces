#include <stdio.h>
#include <vector>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, h, a, b, c;
        scanf("%d %d %d", &n, &m, &h);
        vector<int> arr = vector<int>(), copy, resetArr = vector<int>(n + 1, -1);
        int reset = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr.push_back(a);
        }
        copy = arr;
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &b, &c);
            if (resetArr[b - 1] != reset) {
                copy[b - 1] = arr[b - 1] + c;
            } else {
                copy[b - 1] += c;
            }
            resetArr[b - 1] = reset;
            if (copy[b - 1] > h) {
                reset++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i != 0)
                printf(" ");
            if (reset == resetArr[i]) {
                printf("%d", copy[i]);
            } else {
                printf("%d", arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}