#include <iostream>
#include <algorithm>
using namespace std;

bool des(int i, int j){
    return j < i;
}

int main(){
    int n;
    string num;
    cin >> n >> num;
    int f[n];
    int s[n];

    for(int i = 0; i < n; i++){
        f[i] = num[i] - '0';
    }
    for(int i = n; i < 2*n; i++){
        s[i - n] = num[i] - '0';
    }

    sort(f, f + n);
    sort(s, s + n);
    bool more = true, less = true;
    for(int i = 0; i < n; i++){
        if(f[i] >= s[i]){
            less = false;
            break;
        }
    } 
    for(int i = 0; i< n; i++){
        if(f[i] <= s[i]){
            more = false;
            break;
        }
    }
    cout << ((more || less) ? "YES" : "NO") << endl;
}