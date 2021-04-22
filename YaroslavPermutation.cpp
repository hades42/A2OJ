#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        m[num]++;
        mx = max(mx, m[num]);
    }
    if(mx + mx -1 <= n){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}