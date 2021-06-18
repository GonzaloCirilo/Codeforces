#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m, i, j;
        scanf("%d %d %d %d", &n, &m, &i, &j);
        if(i == n || i == 1 || j == 1 || j ==m){
            if(pair{i, j} == pair{1, 1} || pair{i, j} == pair{n, m} && pair{i, j} == pair{n, 1} && pair{i, j} == pair{1, m}){
                int ii = 0;
                if(i == 1){
                    ii = n;
                }else{
                    ii = 1;
                }
                int ij = 0;
                if(j == 1){
                    ij = m;
                }else{
                    ij = 1;
                }
                printf("%d %d %d %d\n", ii, ij, ii, ij);
            } else {
                printf("1 1 %d %d\n", n, m);
            }
        }else{
            printf("1 1 %d %d\n", n, m);
        }
    }   
}