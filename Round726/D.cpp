#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n % 2 == 0){
            if(ceil(log2(n)) == floor(log2(n))){
                int exp = 0;
                while(n >> 1){
                    exp++;
                    n /= 2;
                }
                if(exp % 2 != 1){
                    printf("Alice\n");
                }else{
                    printf("Bob\n");
                }
            }else{
                printf("Alice\n");
            }
        }else{
            printf("Bob\n");
        }

    }
    return 0;
}
