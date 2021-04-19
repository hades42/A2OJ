#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n + 2);
        for(int i = 0; i < n+2; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        if(sum == arr[n]){
            for(int i = 0; i< n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
            continue;
        }

        sum += arr[n];
        int check = 0;
        for(int i = 0; i < n + 1; i++){
            // see colin galen div3 contest 713 prob D 
            if(sum - arr[i] == arr[n+1]){
                arr[i] = -1; 
                check = 1;
                break;
            }
        }
        if(check){
            for(int i = 0; i < n+1; i++){
                if(arr[i] != -1) cout << arr[i] << " ";
            }
            cout << endl;
        } else{
            cout << -1 << endl;
        }
    }
}
