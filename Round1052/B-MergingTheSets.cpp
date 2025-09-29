#include <stdio.h>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, l, si;
        scanf("%d %d", &n, &m);
        vector<vector<int>> sets = vector<vector<int>>(n);
        vector<int> appear = vector<int>(m + 1, 0);
        map<int, vector<int>> setAppear;
        for (int i = 0; i < n; i++) {
            scanf("%d", &l);
            sets[i] = vector<int>(l);
            for (int j = 0; j < l; j++) {
                scanf("%d", &si);
                appear[si]++;
                sets[i][j] = si;
                setAppear[si].push_back(i);
            }
        }
        bool valid = true;
        for (int i = 1; i <= m; i++) {
            if (appear[i] == 0) {
                valid = false;
                break;
            }
        }
        if (!valid) {
            printf("NO\n");
            continue;
        }
        set<int> critSet;
        for (int i = 1; i <= m; i++) {
            if (setAppear[i].size() == 1) {
                critSet.insert(setAppear[i][0]);
            }
        }

        if (critSet.size() >= n - 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}