#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector< pair<int, int> > arr(n);
    int mn = INT_MAX;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mn = min(mn, a);
        mx = max(mx, b);
        pair<int, int> p = make_pair(a,b);
        arr[i] = p;
    }
    bool find = false;
    int res;
    for(int i = 0 ; i < n; i++){
        if(arr[i].first == mn && arr[i].second == mx){
            find = true;
            res = i+1;
            break;
        }
    }
    if(find){
        cout << res << endl;
    } else{
        cout << -1 << endl;
    }
}
