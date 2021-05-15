#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

void solve(){
    int n;
    set<char> s;
    char cur, prev;
    cin >> n;
    bool ans = true;
    for(int i = 0; i < n; i++){
        cin >> cur;
        if(i != 0){
            if(cur != prev){
                if(s.insert(cur).second == false){
                    //cout << cur << endl;
                    ans = false;
                }
            }
        }else{
            s.insert(cur);
        }
        prev = cur;
    }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}