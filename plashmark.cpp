#include <iostream>
#define ll long long
#include <set>
#include <map>
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX;
    int mx = 0; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mn = min(arr[i], mn); 
        mx = max(arr[i], mx);
    }
    int c1 = 0, c2= 0; 
    for(int i =0 ; i < n; i++){
        c1 += (arr[i] == mn);
        c2 += (arr[i] == mx);
    }
    cout << mx - mn << " ";
    if(mn == mx){
        cout << n * (n-1)/2 << endl;
    } else{
        cout << c1 * c2 << endl;
    }
    return  ;
}