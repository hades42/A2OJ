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
    int cp = k -1;
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] != arr[cp]){
            cp = i;
            break;
        }
    }
    if(cp > k -1){
        cout << -1 << endl; 
    } else if(cp < k -1){
        cout << cp + 1 << endl;
    } else{
        cout << 0 << endl;
    }
    return 0;
}