#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#define ll long long
using namespace std;

set<ll> pre_compute;
void compute(){
    vector<int> is_prime(1000000 + 1, true);
    for(int i = 2; i <= 1e6; i++){
        if(is_prime[i]){
            pre_compute.insert(i*1LL*i);
            for(int mul = 2*i; mul <= 1e6; mul+=i){
                is_prime[mul] = false;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    compute();
    for(int i = 0; i < n; i++){
        ll num;
        cin >> num;
        if(pre_compute.count(num) == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
    return 0;
}