#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int t, a;
        cin >> t;
        vector<int> arr = vector<int>(t);
        for(int i = 0; i < t; i++){
            cin >> arr[i];
        }
        int mine = *min_element(arr.begin(), arr.end());
        int sum = 0;
        for(int i = 0; i < t; i++) {
            sum += arr[i] - mine;
        }
        cout << sum << endl;
    }
    
    return 0;
}