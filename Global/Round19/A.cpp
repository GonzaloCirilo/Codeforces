#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t, n;

    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr = vector<int>();
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        vector<int> prefix = vector<int>(arr.size(), -1), sufix = vector<int>(arr.size(), 1e9+2);
        int maxe = prefix[0], mine = sufix[0];
        for(int i = 0; i < n; i++){
            maxe = max(maxe, arr[i]);
            prefix[i] = maxe;
            int ii = n - i - 1;
            mine = min(mine, arr[ii]);
            sufix[ii] = mine;
        }
        bool found = false;
        for(int i = 0; i < n; i++) {
            if(prefix[i] > sufix[i]){
                found = true;
            }
        }
        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}