#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int max = 0, d;
        while(n){
            d = n % 10;
            if (d > max){
                max = d;
            }
            n /= 10;
        }
        cout << max << endl;
    }
    return 0; 
}