#include <stdio.h>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> ii;
int main(){

    int t, dr[4] = {0, 0, 1, -1}, dc[4] = {1, -1, 0, 0};
    scanf("%d", &t);
    while(t--){
        int n, m; char grid[53][53] = {}; int visited[53][53] = {};
        scanf("%d %d", &n, &m);
        int sr = 0, sc = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ;j++){
                cin >> grid[i][j];
                if (grid[i][j] == 'R' || grid[i][j] == 'W'){
                    sr = i, sc = j;
                }
            }
        }
        queue<pair<char ,ii>> q;
        if(grid[sr][sc] == '.'){
            grid[sr][sc] = 'W';
        }
        q.push({grid[sr][sc], {sr, sc}});
        visited[sr][sc] = true;
        bool invalid = false;
        while(!q.empty()){
            auto [color, pos] = q.front(); q.pop();
            auto [cr, cc] = pos;
            for(int i = 0; i < 4; i++){
                int nr = cr + dr[i], nc = dc[i] + cc;
                if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                    if(grid[nr][nc] == '.'){
                        if(color == 'W')
                            grid[nr][nc] = 'R';
                        else
                            grid[nr][nc] = 'W';
                        if(!visited[nr][nc]){
                            q.push({grid[nr][nc], {nr, nc}});
                            visited[nr][nc] = true;
                        }
                    }else{
                        if(color == grid[nr][nc]){
                            invalid = true;
                            break;
                        }
                        if(!visited[nr][nc]){
                            q.push({grid[nr][nc], {nr, nc}});
                            visited[nr][nc] = true;
                        }
                    }
                }
            }
            if(invalid) break;
        }

        

        if(invalid){
            printf("NO\n");
        }else{
                printf("YES\n");
                for(int i =0; i < n; i++){
                    for(int j = 0; j < m; j++){
                        printf("%c", grid[i][j]);
                    }
                    printf("\n");
                
            }
        }
    }
    return 0;
}