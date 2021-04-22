#include <iostream>
#include <string>
using namespace std;

int main (){
    int y, k ,n;
    cin >> y >> k >> n;
    bool found = false;
    for(int i = 1; i <= 100000; i++){
        int sum = i*k;
        if(sum > n){
            break;
        }
        if(sum > y){
            cout << sum - y << " ";
            found = true;
        }
    }
    if(!found){
        cout << -1 << endl;
    }
}