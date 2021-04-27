#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    ll arr[n];
    ll temp[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp, temp + n);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == temp[i]){
            count++;
        }
    }
    if(count == n) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    int seg = 0;
    int l, r;
    for(int i =0; i < n-1, seg < 1;){
        if(arr[i] < arr[i+1]){
            i++;
        } else{
            l = i;
            r = i;
            while(arr[i] > arr[i+1] && i < n -1){
                i++;
                r++;
            }
            sort(arr + l, arr+r +1);
            seg++;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] != temp[i]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << l+1 << " " << r+1<< endl;
}