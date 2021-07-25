#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int evaluateKicks(vector<int> kicks){
    int goalsA = 0, goalsB = 0, rA = 5, rB = 5;
    for(int i = 0; i < kicks.size(); i+=2){
        goalsA += kicks[i];
        rA--;
        //printf("Kick %d: a = %d vs b = %d\n", i + 2, goalsA, goalsB);
        if(goalsB > goalsA){
            if(goalsB - goalsA > rA){
                return 10 - rA - rB;
            }
        }else{
            if(goalsA > goalsB){
                if(goalsA - goalsB > rB){
                    return 10 - rA - rB;
                }
            }
        }
        goalsB += kicks[i + 1];
        rB--;
        //printf("Kick %d: a = %d vs b = %d\n", i + 2, goalsA, goalsB);
        if(goalsB > goalsA){
            if(goalsB - goalsA > rA){
                return 10 - rA - rB;
            }
        }else{
            if(goalsA > goalsB){
                if(goalsA - goalsB > rB){
                    return 10 - rA - rB;
                }
            }
        }
        
    }
    return 10;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> kicks = vector<int>(10, 0);
        int u = 0;
        string sKicks;
        cin >> sKicks;
        vector<int> ui = vector<int>();
        for(int i = 0; i < 10; i++){
            char c = sKicks[i];            
            if(c == '?'){
                kicks[i] = -1;
                u++;
                ui.push_back(i);
            }else{
                kicks[i] = c - '0';
                //printf("%d ", kicks[i]);
            }
        }
       // puts("");

       

        if(u == 0){
            printf("%d\n", evaluateKicks(kicks));
        }else{
            int ans = 11;
            for(long long mask = 0; mask < (1 << u); mask++){
                auto auxKicks = kicks;
                for(int bit = 0; bit < u; bit++){
                        if((mask >> bit) & 1)
                            auxKicks[ui[bit]] = 1;
                        else
                            auxKicks[ui[bit]] = 0;
                }
                ans = min(ans, evaluateKicks(auxKicks));
            }
            printf("%d\n", ans);
        }


    }
}