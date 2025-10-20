#include <stdio.h>
#include <vector>
#include <algorithm>
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
        printf("%d\n", *max_element(arr.begin(), arr.end()));
    }
    return 0;
}