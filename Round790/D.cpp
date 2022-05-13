#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, x;
        cin >> n >> m;
        vector<vector<int> > g = vector<vector<int> >(n, vector<int>(m,0));
        vector<int> ld = vector<int>(n + m), rd = vector<int>(n+m);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                cin >> x;
                ld[(j - i) + (n)] += x;
                rd[i + j] += x;
                g[i][j] = x;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                if(ld[(j - i) + (n)] + rd[i+j] - g[i][j] > ans){
                    ans = ld[(j - i) + (n)] + rd[i+j] - g[i][j];
                    //cout << i << "& " << j << endl;
                }
            }
        }

        cout << ans << endl;

    }
    
    return 0;
}