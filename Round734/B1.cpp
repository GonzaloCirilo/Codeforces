#include <stdio.h>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        map<char, int> m;
        cin >> s;

        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        // for k = 2
        /*for(auto it = r.begin(); it != r.end(); it++){
            cout << *it << " ";
        }
        puts("");
        for(auto it = g.begin(); it != g.end(); it++){
            cout << *it << " ";
        }
        puts("");*/
        int m2 = 0, m1 = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            auto [k, v] = *(it);
            if(v > 1){
                m2++;
            }else{
                m1++;
            }
        }
        cout << m2 + (m1 / 2) << endl;
        
    }
    return 0;
}