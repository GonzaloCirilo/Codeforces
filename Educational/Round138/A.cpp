#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, m, n, x, y;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        vector<int> row = vector<int>(n), col = row;
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            x--, y--;
            row[x]++;
            col[y]++;
        }
        int maxR = *max_element(row.begin(), row.end()), maxC = *max_element(col.begin(), col.end());
        if( maxR == 1 && maxC == 1 && m < n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    return 0;
}