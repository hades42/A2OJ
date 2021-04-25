#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int n;
   cin >> n;
   long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    sort(arr, arr+n);
    long long count = 0;
    for(long long i = 1; i<= n; i++){
        count+= abs(i - arr[i-1]);
    }
    cout << count << endl;
}