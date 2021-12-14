#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t;
    cin >> n;
    while(n--){
        vector<string> arr;
        cin >> t;
        for(int i = 0; i < t - 2; i++){
            string aux;
            cin >> aux;
            arr.push_back(aux);
        }

        bool done = false;
        string s = arr[0];
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i][1] == arr[i+1][0]){
                s += arr[i+1][1];
            }else{
                s += arr[i + 1];
                done = true;
            }
        }
        if(!done){
            s+='a';
        }
        cout << s << endl;;
    }
    return 0;
}