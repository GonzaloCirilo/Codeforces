#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, q;
    cin >> t;
    while(t--) {
        cin >> n >> q;
        vector<long long> arr = vector<long long>(n), prefix = arr;
        long long acc = 0;
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            arr[i] = (x);
            
        }
        sort(arr.rbegin(), arr.rend());
        for(int i = 0; i < arr.size(); i++){
            acc += arr[i];
            prefix[i] = acc;
            //cout << " " << prefix[i];
        }

        while(q--){
            long long qi;
            cin >> qi;
            int l = 1, r = arr.size(), ans = -1;
            while(l <= r){
                int mid = (l+r) / 2;
                if(prefix[mid - 1] >= qi){
                    ans = mid;
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}