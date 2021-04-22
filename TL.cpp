#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int r[n];
    int w[m];
    for(int i = 0; i< n; i++){
        cin >> r[i];
    }
    for(int i = 0; i < m; i++){
        cin >> w[i];
    }
    sort(r, r+n);
    sort(w, w+m);

    int v = r[n-1];
    int p = 2*r[0];
    int res = max(v, p);

    if(w[0] > res){
        cout << res << endl;
    } else{
        cout << -1 << endl;
    }
}