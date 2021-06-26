#include <stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        bool isOdd = n % 2;
        int limit = isOdd ? 3 : 2, aux = limit - 1;
        for(int i = 0; i < limit; i++){
            if(i != 0) printf(" ");
            printf("%d", (aux) % limit + 1);
            aux++;
        }
        for(int i = limit; i < n; i++){
            if(isOdd){
                if(i % 2 == 0){
                    printf(" %d", i);
                }else{
                    printf(" %d", i + 2);
                }
            }else{
                if(i % 2 == 0){
                    printf(" %d", i + 2);
                }else{
                    printf(" %d", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}