#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
using namespace std;
typedef pair<int,int> ii;
typedef pair<int, ii> lii;

bool isInGrid(int x, int y, int &n, int &m){
    return x >= 0 && x < n && y >= 0 && y < m; 
}

int main(){
    int n, m;
    long long w;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};


    scanf("%d %d %lld", &n, &m, &w);
    vector<vector<int>> grid = vector<vector<int>>(n, vector<int>());
    vector<vector<int>> distance = vector<vector<int>>(n, vector<int>(m, -1));
    vector<vector<int>> revdistance = vector<vector<int>>(n, vector<int>(m, -1));
    vector<ii> portals = vector<ii>();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int aux;
            scanf("%d", &aux);
            grid[i].push_back(aux);
            if(aux > 0){
                portals.push_back({i,j});
            }            
        }
    }

    priority_queue<long long, vector<long long>, greater<long long>> sp, pt;

    queue<ii> pq;
    pq.push({0,0});
    distance[0][0] = 0;
    while(!pq.empty()){
        auto [x, y] = pq.front(); pq.pop();
        if(grid[x][y] > 0){
            sp.push(1LL * (distance[x][y]) * w + grid[x][y]);
        }
        for(int i = 0; i < 4; i++){
            if(isInGrid(x + dx[i], y + dy[i], n, m) && grid[x + dx[i]][y + dy[i]] != -1){
                if(distance[x + dx[i]][y + dy[i]] == -1){
                    distance[x + dx[i]][y + dy[i]] = distance[x][y] + 1;
                    pq.push({x + dx[i], y + dy[i]});
                }
            }
        }
    }
    queue<ii> rpq;
    rpq.push({n-1,m-1});
    revdistance[n-1][m-1] = 0;
    
    while(!rpq.empty()){
        auto [x, y] = rpq.front(); rpq.pop();
        if(grid[x][y] > 0){
            pt.push(1LL * (revdistance[x][y]) * w + grid[x][y]);
        }
        for(int i = 0; i < 4; i++){
            if(isInGrid(x + dx[i], y + dy[i], n, m) && grid[x + dx[i]][y + dy[i]] != -1){
                if(revdistance[x + dx[i]][y + dy[i]] == -1){
                    revdistance[x + dx[i]][y + dy[i]] = revdistance[x][y] + 1;
                    rpq.push({x + dx[i], y + dy[i]});
                }
            }
        }            
    }
    unsigned long long ans = distance[n-1][m-1] == -1 ? -1 : distance[n-1][m-1] * w * 1ULL;
    if(!sp.empty() && !pt.empty()){
        if(ans == - 1)
            ans = sp.top() + pt.top() + 0ULL;
        else
            ans = min(ans, sp.top() + pt.top() + 0ULL);
    }

    if(ans != -1)
        printf("%llu\n", ans);
    else 
        printf("-1\n");
    return 0;
}