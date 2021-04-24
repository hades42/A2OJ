#include <iostream>
using namespace std;

int main(){
    int n, a,b,c;
    cin >> n >> a >> b >> c;
    int count = 0;
    for(int i = 0; a*i <= n; i++){
        for(int j = 0; a*i + b*j <= n; j++){
            int rem = n - (a*i + b*j);
            if(rem % c == 0){
                count = max(count, rem/c + i + j);
            }
        }
    }
    cout << count << endl;
}