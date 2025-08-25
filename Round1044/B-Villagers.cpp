#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t, n, g;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    vector<int> gs = vector<int>();
    for (int i = 0; i < n; i++) {
      scanf("%d", &g);
      gs.push_back(g);
    }
    sort(gs.rbegin(), gs.rend());
    long long ans = 0;
    for (int i = 0; i < n; i += 2) {
      ans += gs[i];
    }
    printf("%lld\n", ans);
  }
  return 0;
}