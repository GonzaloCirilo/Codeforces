#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        string s, aux;;
        cin >> n >> s;
        aux = s;
        sort(aux.begin(), aux.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != aux[i]){
                ans++;
            }
        }
        cout << ans << endl;

    }
    return 0;
}