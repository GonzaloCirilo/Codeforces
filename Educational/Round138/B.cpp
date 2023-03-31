#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        vector<int> spell;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            int h;
            scanf("%d", &h);
            ans += h;
        }
        for(int i = 0; i < n; i++){
            int s;
            scanf("%d", &s);
            spell.push_back(s);
            ans += s;
        }
        printf("%lld\n", ans - (*max_element(spell.begin(), spell.end())));
    }
    return 0;
}