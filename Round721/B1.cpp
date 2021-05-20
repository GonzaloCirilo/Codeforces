#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int count = 0;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            count += (c == '0');
        }
        
        if(count % 2 == 0 || count == 1){
            cout << "BOB";
        }else {
            cout << "ALICE";
        }

        cout << endl;
    }
}