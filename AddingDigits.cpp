#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    bool find = false;
    for(int i = 0; i < 10; i++){
        if((a*10+i) %b == 0){
            cout << a*10+i;
            string s(n-1, '0');
            cout << s << endl;
            find = true;
            break;
        }
    }    
    if(!find){
        cout << -1 << endl;
    }
}