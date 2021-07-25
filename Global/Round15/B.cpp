#include <vector>
#include <stdio.h>
using namespace std;

typedef vector<int> vi;

bool isSuperior(vi a, vi b){
    int fa = 0;
    for(int i = 0; i < 5; i++){
        if(a[i] < b[i]){
            fa++;
        }
    }
    return fa >= 3;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<vi> ranks = vector<vi>(n, vi(5)), g = vector<vi>(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                scanf("%d", &ranks[i][j]);
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(isSuperior(ranks[i], ranks[ans])){
                ans = i;
            }
        }

        for(int i = 0; i < n; i++){
            if(isSuperior(ranks[i], ranks[ans])){
                ans = -1;
                break;
            }
        }
        printf("%d\n", ans == -1? ans : ans + 1);
        
    }
    return 0;
}