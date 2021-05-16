#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int midfix(vector<int> a, int i, int j){
    int ans = a[i];
    for(int k = i + 1; k <= j; k++){
        ans ^= a[k];
    }
    return ans;
}

void solve(){
    int t, n;
    vector<int> a;
    cin >> t;
    for(int o = 0; o < t; o++){
        cin >> n;
        a = vector<int>(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> ra = a;
        reverse(ra.begin(), ra.end());

        vector<int> prefix = vector<int>(n), sufix = prefix;
        prefix[0] = a[0];
        sufix[n-1] = a[n - 1];

        // constructy prefix & suffix
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] ^ a[i];
        }
        for(int i = n - 2; i >= 0; i--){
            sufix[i] = sufix[i + 1] ^ a[i]; 
        }

        // check for 2 partition
        if(prefix[n - 1] == 0){
            cout << "YES\n";
            continue;
        }

        bool found = false;
        // check for 3 poartition
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                // [0, i]; [i + 1, j]; [j + 1, n - 1]
                if(prefix[i] == sufix[j + 1] && prefix[i] == midfix(a, i + 1, j)){
                    cout << "YES\n";
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found)
            cout << "NO\n";
        
    }
}

int main() {
    solve();
    return 0;
}
/*
9
3
0 2 2
4
2 3 1 10
10
5 5 5 5 5 5 5 5 5 36
10
5 5 5 5 5 5 5 5 5 5
2
3 4
2
2 2
3
2 2 3
3
4 5 4
3
4 0 4
 */