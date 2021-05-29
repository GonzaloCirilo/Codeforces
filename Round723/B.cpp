#include <stdio.h>
#include <set>
using namespace std;
int main(){
    int t, n;
    scanf("%d", &t);
    set<int> nums;
    for(int i = 0; i * 11 <= 1099; i++){
        for(int j = 0; j * 111 <= 1099; j++){
            nums.insert(i * 11 + j * 111);
        }
    }

    while(t--){
        scanf("%d", &n);
        if(n < 11 || (nums.find(n) == nums.end() && n <= 1099)){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
