#include <stdio.h>
#include <vector>
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        vector<int> arr;
        map<int, int> m, r;
        cin >> n >> k;
        arr = vector<int>(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }
        int m2 = 0, m1 = 0, ind = 0;
        map<int,queue<int>> aux;
        for(auto it = m.begin(); it != m.end(); it++){
            auto [key, v] = *(it);
            //cout << "key: " << key << " v: " << v << endl;
            if(v > k - 1){
                m2++;
            }else{
                m1 += v;
            }
        }
        //cout << m2 + (m1 / k) << endl;
        int rep = m2 + (m1 / k);
        for(auto it = m.begin(); it != m.end(); it++){
            auto [key, v] = *(it);
            //cout << "key: " << key << " v: " << v << endl;
            if(v > k - 1){
                for(int i = 1; i <= k; i++){
                    if(r[i] < rep){
                        aux[key].push(i);
                        r[i]++;
                    }
                }
            }else{
                for(int i = 1; i <= v; i++){
                    if(r[(ind % k) + 1] < rep){
                        aux[key].push((ind % k) + 1);
                        r[(ind % k) + 1]++;
                    }
                    ind++;
                }
            }
        }

        for(int i = 0; i < arr.size(); i++){
            if (i != 0) cout << " ";
            if(!aux[arr[i]].empty()){
                auto x = aux[arr[i]].front(); aux[arr[i]].pop();
                cout << x;
            }else{
                cout << 0;
            }
            
        }
        cout << endl;
        
    }
    return 0;
}