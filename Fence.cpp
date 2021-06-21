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
	ll n, k; cin >> n >> k;
	vector<ll> arr(n+1);
	for(ll i = 1; i <= n; i++){
		cin >> arr[i];
	}
	for(ll i = 2; i <= n; i++){
		arr[i] += arr[i-1];
	}
	ll mn = arr[k];
	ll ans = k;
	for(ll i = k; i <= n; i++){
		ll num = arr[i] - arr[i-k];
		if(num < mn){
			mn = num;
			ans = i;
		}
	}
	cout << ans - k + 1 << endl;
}

