#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    if(n == m){
        for(int i = 0; i < n; i++){
            cout << "BG";
        }
    } else if(n > m){
        int more = n - m;
        for(int i = 0; i < more; i++){
            cout << "B";
        }
        for(int i =0; i < m; i++){
            cout << "GB";
        }
    } else{
        int more = m - n;
        for(int i = 0; i < more; i++){
            cout << "G";
        }
        for(int i = 0; i < n; i++){
            cout << "BG";
        }
    }
}