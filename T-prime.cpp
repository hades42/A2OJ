#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007;
#define INF 1e18
using namespace std;

template<typename T>
void print(const T& t) {
    std::copy(t.cbegin(), t.cend(), std::ostream_iterator<typename T::value_type>(std::cout, " "));
    cout << endl;
}

template<typename T>
void print2d(const T& t) {
    std::for_each(t.cbegin(), t.cend(), print<typename T::value_type>);
}

set<ll> precompute;
void compute(){
	precompute.insert(4);
	for(ll i = 3; i <= 1e6; i++){
		if(i % 2 == 0) continue;
		bool flag = true;
		for(ll j = 3; j*j <= i; j+= 2){
			if(i % j == 0){
				flag = false;
				break;
			}
		}
		if(flag) precompute.insert(i*i);
		else continue;
	}
}
int main() {
	compute();	
	ll n; cin >> n;
	for(ll i = 0; i < n; i++){
		ll num; cin >> num;
		if(precompute.count(num)){
			cout << "YES" << endl;
		} else{
			cout << "NO" << endl;
		}
	}
}