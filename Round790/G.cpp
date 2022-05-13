#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> g;

vector<char> colors;
g graph;

int ans;

pair<int,int> dfs(int ind) {
    if(graph[ind].size()==0){
        return {(colors[ind] == 'B'), (colors[ind] == 'W')};
    }
    int bAcc = colors[ind] == 'B', wAcc = colors[ind] == 'W';
    for(int i = 0; i < graph[ind].size(); i++){
        auto [b, w] = dfs(graph[ind][i]);
        bAcc += b;
        wAcc += w;
    }
    if(bAcc == wAcc) ans++;
    return {bAcc, wAcc};
}

int main(){
    int t, n, a;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> n;
        graph = g(n);
        colors = vector<char>(n);
        for(int i = 1; i < n; i++){
            cin >> a;
            graph[a-1].push_back(i);
        }
        for(int i = 0; i < n; i++){
            cin >> colors[i];
        }
        dfs(0);
        cout << ans << endl;
    }
    return 0;
}