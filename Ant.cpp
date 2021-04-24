#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int l, ants;
        cin >> l >> ants;
        vector<int> arr(ants);
        int mn = INT_MAX;
        int mx = 0;
        for(int i = 0; i < ants; i++){
            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }
        int diff = INT_MAX;
        int find;        
        for(int i = 0; i < ants; i++){
            if(abs(l/2 - arr[i]) < diff){
                find = arr[i];
                diff = abs(l / 2 - arr[i]);
            }
        }
        cout << (find > l/2 ? l - find : find) << " ";
        cout << max(l-mn, mx) <<endl;
    }
}