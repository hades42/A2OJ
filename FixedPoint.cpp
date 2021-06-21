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

int main() {
	ll n; cin >> n;	
	vector<ll> arr(n);
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == i) ans++;
	}
	ll temp = 0;
	for(ll i = 0; i < n; i++){
		if(arr[i] != i){
			if(arr[arr[i]] == i){
				ans+=2;
				temp = 1;
				break;
			}
		}
	}
	if(temp == 0 && ans != n) ans++;
	cout << ans << endl;
	return 0;
}