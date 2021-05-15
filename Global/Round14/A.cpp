#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<bool>visited;
deque<int> q;
bool dfs(int n, int &max, int d, int &x, vector<int>&arr, int sum){
    if(sum + arr[n] != x){
        if(max == d + 1){
            printf("YES\n");
            int cont = 0;
            while(!q.empty()){
                if (cont != 0) printf(" ");
                int a = q.front(); q.pop_front();
                printf("%d", a);
                cont ++;
            }
            printf("\n");
            return true;
        }
        for(int i = 0; i < max; i++){
            if(!visited[i]){
                visited[i] = true;
                q.push_back(arr[i]);
                if(dfs(i, max, d + 1, x, arr, sum + arr[n])){
                    return true;
                }
                q.pop_back();
                visited[i] = false;
            }
        }
        return false;
    }
    return false;
}

void test(){
    int n, x;
    vector<int> arr;
    scanf("%d %d", &n , &x);
    arr = vector<int>(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    if(sum == x){
        printf("NO\n");
        return;
    }
    sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < n; i++){
        visited = vector<bool>(n, 0);
        q = deque<int>();
        visited[i] = true;
        q.push_back(arr[i]);
        if(dfs(i, n, 0, x, arr, 0)){
            return;
        }
    }
    printf("NO\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        test();
    }
    return 0;
}
