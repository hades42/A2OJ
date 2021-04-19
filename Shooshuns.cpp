#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // checking from the k to end;
    int pk = arr[k-1];
    for(int i = k; i < n; i++){
        if(pk != arr[i]){
            cout << -1 << endl;
            return 0;
        }
    }
    int res;
    for(int i = k - 1; i > 0; i--){
        if(arr[i] != arr[i-1]){
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}