#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> ii;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> sheeps;
        vector<char> s;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            s.push_back(c);
            if(c == '*'){
                sheeps.push_back(i);
            }
        }
        if(sheeps.size() < 2){
            cout << "0" << endl;
            continue;
        }
        int m = (int)sheeps.size() / 2;
        long long ans = 0;
        for(int i = 0; i < sheeps.size(); i++){
            ans += abs(sheeps[i] - (sheeps[m] - m + i));
        }
        cout << ans << endl;
    }
    return 0;
}