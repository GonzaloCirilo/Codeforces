#include <map>
#include <iostream>
using namespace std;

int main(){
    int t, n, k, x;
    cin >> t;
    while(t--){
        cin >> n >> k;
        map<long long, int> ax;

        for(int i = 0; i < n; i++){
            cin >> x;
            ax[x]++;
        }
        int aux = -1, cont = 0, a = -1, b = -1;
        for(auto [x,v] : ax) {
            //cout << x << " " << v << endl;
            if(v >= k){
                if(x - aux != 1) {
                    if(cont > (b - a)){
                        b = aux;
                        a = aux - cont + 1;
                    }
                    cont = 0;
                }
                aux = x;
                cont++;
            }else{
                if(cont > (b - a)){
                    b = aux;
                    a = aux - cont + 1;
                }
                aux = -1;
                cont = 0;
            }
        }
        if(cont > (b - a)){
            b = aux;
            a = aux - cont + 1;
        }
        if(a == -1){
            cout << -1 << endl;
        }else{
            cout << a << " " << b << endl;
        }

    }
    return 0;
}