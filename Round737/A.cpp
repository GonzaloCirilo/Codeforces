#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<int> arr = vector<int>(n);
        vector<long long> prefix = vector<long long>(n), sufix = prefix;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr.begin(), arr.end());
        prefix[0] = arr[0];
        sufix[n - 1] = arr[n - 1]; 
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] + arr[i];
            int index = n - 1 - i;
            sufix[index] = sufix[index + 1] + arr[index];
        }

        double a, b, ans = -1e10f;
        for(int i = 0; i < n - 1; i++){
            int na = i + 1, nb = n - na;
            ans = max(ans, 1.0 * prefix[i]/na + 1.0 * sufix[i+1]/nb);
        }
        printf("%.9lf\n", ans);
    }
    return 0;
}