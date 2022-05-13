#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s;
    cin>> s;
    int a = 0, b = 0;
    for(int i = 0; i < 3; i++){
        a += s[i] - '0';
        b += s[i+3] - '0';
    }
    if(a == b)
        cout << "YES\n";
    else
        cout << "NO\n";
    }
    
    return 0;
}