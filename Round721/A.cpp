#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n == 1){
            printf("0\n");
            continue;
        }
        //reverse(p2.begin(), p2.end());
        int c = floor(log2(n) + 1);
        printf("%d\n", (1 << (c - 1)) - 1);
    }
    return 0;
}