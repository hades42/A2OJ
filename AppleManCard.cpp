#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(int a, int b){
    return a > b;
}
int main(){
    long long n, k;
    string input;
    cin >> n >> k >> input;
    vector<long long> arr(26);
    for(int i = 0; i < input.length(); i++){
        arr[input[i] - 65]++;
    }
    sort(arr.begin(), arr.end(), comp);
    long long res = 0;
    for(int i = 0; i < 26; i++){
        if(k > arr[i]){
            res += (arr[i]*arr[i]);
            k-= arr[i];
        } else{
            res += k*k;
            break;
        } 
    }
    cout << res << endl;
}