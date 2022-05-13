#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int minDiff(string a, string b) {
    int total = 0;
    for(int i = 0; i < a.size(); i++) {
        int d = abs(a[i] - b[i]);
        total += d;
    }
    //cout << a << "-" << b << "=" << total << endl;
    return total;
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int t, l;
        vector<string> arr;
        cin >> t >> l;
        for(int i = 0; i < t; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        int ans = 1e9;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                ans = min(minDiff(arr[i], arr[j]), ans);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}