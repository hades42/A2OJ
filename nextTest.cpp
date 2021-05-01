#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<bool> arr(3005);
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[num] = true;
    }
    for(int i = 1; i <= 3005; i++){
        if(arr[i] == false){
            cout << i << endl;
            break;
        }
    }
    return 0;
}