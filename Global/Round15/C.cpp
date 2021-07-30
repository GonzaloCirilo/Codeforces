#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> ii;
int main(){
    int t, n, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        int u, v;
        vector<ii> cords = vector<ii>();
        vector<bool> visited = vector<bool>(2*n+1, false);
        for(int i = 0; i < k; i++){
            scanf("%d %d", &u, &v);
            cords.push_back({ max(u,v), min(u,v) });
            visited[u] = true;
            visited[v] = true;
        }

        vector<int> unvisited = vector<int>();
        for(int i = 1; i < visited.size(); i++){
            if(!visited[i]){
                unvisited.push_back(i);
            }
        }

        for(int i = 0; i < n - k; i++){
            int j = i + n - k;
            cords.push_back({max(unvisited[i], unvisited[j]), min(unvisited[i], unvisited[j])});
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ii maxp = cords[i].first > cords[j].first ? cords[i] : cords[j], minp = cords[i].first > cords[j].first ? cords[j] : cords[i];
                if(maxp.second < minp.first && maxp.second > minp.second){
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}