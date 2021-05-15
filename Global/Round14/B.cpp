#include <stdio.h>
#include <set>
using namespace std;
int main(){
    int t, n;
    scanf("%d", &t);
    set<int> s;
    for(int i = 1; i < 1e5 + 5; i++){
        s.insert(i * i * 2);
        s.insert(i * i * 4);
    }
    while(t--){
        scanf("%d", &n);
        if(s.find(n) != s.end()){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

}

