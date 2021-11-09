#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int kCost[26] = {};
        string keyboardLayout, word;
        cin >> keyboardLayout >> word;
        for(int i = 0; i < keyboardLayout.size(); i++) {
            kCost[keyboardLayout[i] - 'a'] = i;
        }
        int ans = 0;
        for(int i = 1; i < word.size(); i++) {
            ans += abs(kCost[word[i] - 'a'] - kCost[word[i-1] - 'a']);
        }
        cout << ans << endl;
    }
    return 0;
}