#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a;
        scanf("%d", &n);
        vector<int> arr, dict = vector<int>(101, -1);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            arr.push_back(a);
            if (i % 2 == 0) {
                dict[a] = 0;
            } else {
                dict[a] = 1;
            }
        }
        bool valid = true;
        for (int i = 1; i < n; i++) {
            if (dict[i] == dict[i + 1]) {
                valid = false;
            }
        }
        if (valid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}