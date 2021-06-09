#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        string s;
        cin >> s;
        long long l = 0, scount = 0, ans = 0;
        char prev = '?';
        for(int i = 0; i < s.size(); i++){
            if(prev != '?' && s[i] != '?'){
                if ((scount % 2 == 1 && s[i] != prev) || (scount % 2 == 0 && s[i] == prev)){
                    ans += (l * (l + 1)) / 2;
                    ans -= (scount * (scount + 1)) / 2;
                    l = scount;
                    scount = 0;
                    prev = '?';
                    //continue;
                }
            }
            if(s[i] == '1'){
                scount = 0;
                prev = '?';
                if(i != 0 && s[i] == s[i-1]){
                    ans += (l * (l + 1)) / 2;
                    l = 0;
                }
            }else if(s[i] == '0'){
                scount = 0;
                prev = '?';
                if(i != 0 && s[i] == s[i-1]){
                    ans += (l * (l + 1)) / 2;
                    l = 0;
                }
            }else if(s[i] == '?'){
                scount++;
                if(i != 0 && s[i-1] != '?'){
                    prev = s[i - 1];
                }
            }
            l++;
        }

        if(l != 0) {
            ans += (l * (l + 1)) / 2;
        }
        printf("%lld\n", ans);


    }
    return 0;
}
