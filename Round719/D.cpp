#include <stdio.h>
#include <vector>
#include <map>
using namespace std;
bool fastScan(int &x) {
	bool neg = false;
	int c = getchar();
	bool end = c == EOF;
	if (end)
		return false;
	x = 0;
	if (c == '-') {
		neg = true;
		c = getchar();
	}
	for (; (c > 47 && c < 58); c = getchar())
		x = (x << 1) + (x << 3) + c - 48;
	if (neg)
		x *= -1;
	return true;
}

int main(){
    int t;
    fastScan(t);
    while(t--){
        map<int, int> m;
        int n;
        fastScan(n);
        long long ans = 0;
        for(int i = 0; i < n; i++){
            int aux;
            fastScan(aux);
            aux -= i;
            if(!m.insert({aux, 1}).second){
                //add the previous ones
                ans += m[aux];
                m[aux]++;
            }
        }
        printf("%lld\n", ans);
    }
}