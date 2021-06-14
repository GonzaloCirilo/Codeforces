#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;
int mod = 1e9 + 7;
long long modPow(int e){
    long long ans = 1;
    long long x = 2;
    while(e > 0){
        if (e & 1)
            ans = (ans * x) % mod;
 
        // y must be even now
        e = e >> 1; // y = y/2
        x = ((x % mod) * (x % mod)) % mod;
    }
    return ans;
}

int main(){
    int t, n; 
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> p1 = vector<int>(n), p2 = p1;
        vector<vector<int>> g =  vector<vector<int>> (n, vector<int>());
        for(int i = 0; i < n; i++){
            int aux;
            scanf("%d", &aux);
            p1[i] = aux - 1;
        }
        for(int i = 0; i < n; i++){
            int aux;
            scanf("%d", &aux);
            p2[i] =  aux - 1;
            g[p1[i]].push_back(p2[i]);
        }

        vector<int> visited = vector<int>(n, 0);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                //DFS
                stack<int> s;
                s.push(i);
                visited[i] = 1;
                while(!s.empty()){
                    int n = s.top(); s.pop();
                    for(int j = 0; j < g[n].size(); j++){
                        int ad = g[n][j];
                        if(!visited[ad]){
                            visited[ad] = true;
                            s.push(ad);
                        }
                    }
                }                
                ans++;
            }
        }
        //mod exp

        printf("%lld\n", modPow(ans));
        
    }
    return 0;
}