#include <stdio.h>
#include <vector>
using namespace std;

bool isValid(int x, int y, int h, int w){
    return x >= 0 && x < w && y >= 0 && y < h; 
}

bool isInBorder(int x, int y, int h, int w){
    return (x == 0) ||
        (x == w-1) ||
        (y == 0) ||
        (y == h-1);
}

int main() {
    int t, h, w;
    int dx[8] = {1,1,1,-1,-1,-1,0,0}, dy[8] = {1,-1,0,1,-1,0,1,-1};
    scanf("%d", &t);
    while (t--){
        scanf("%d %d", &h, &w);
        vector<vector<int>>g = vector<vector<int>>(h, vector<int>(w));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(g[i][j] == 0 && isInBorder(j, i, h, w)){
                    g[i][j] = 1;
                    printf("1");
                    for(int k = 0; k < 8; k++){
                        int nx = j + dx[k], ny = i + dy[k];
                        if(isValid(nx, ny, h, w)){
                            g[ny][nx] = 2;
                        }
                    }
                }else{
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}