#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int up[n];
    int low[n];
    int sumup = 0;
    int sumlow = 0;
    bool diff = false;
    for(int i = 0; i < n; i++){
        cin >> up[i] >> low[i];
        sumup += up[i];
        sumlow += low[i];
        if(up[i] % 2 + low[i] %2 == 1){
            diff = true;
        }
    }
    if(sumup %2 == 0 && sumlow %2 == 0){
        cout << 0 << endl;
    } else if(sumup % 2 != 0 && sumlow %2 != 0 && diff){
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}