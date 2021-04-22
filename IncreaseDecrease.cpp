#include <iostream>
using namespace std;

int main(){
    int y, k, n;
    cin >> y >> k >> n;
    bool found = false;
    for(int x = 1; x+y <= n; x++){
        if((x+y) % k == 0){
            found = true;
            cout << x << " ";
        }
    } 
    if(!found){
        cout << -1 << endl;
    }
    return 0;
}