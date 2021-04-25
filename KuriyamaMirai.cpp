#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n+1);
    vector<long long> arr2(n+1);
    for(int i = 1; i<= n; i++){
        long long num; cin >> num;
        arr[i] = arr2[i] = num;
    }
    sort(arr2.begin(), arr2.end());
    for(int i = 1; i <= n; i++){
        arr[i] += arr[i-1];
        arr2[i] += arr2[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 2){
           cout << arr2[r] - arr2[l-1] << endl;
        } else{
           cout << arr[r] - arr[l-1] << endl;
        }
    }
}