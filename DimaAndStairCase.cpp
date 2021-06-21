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
	vector<ll> arr(n+1);
	for(ll i = 1; i <= n; i++){
		cin >> arr[i];
	}
	ll m; cin >> m;
	ll l = 0;
	ll prevH = 0;
	while(m--){
		ll x, y; cin >> x >> y;
		l = max(l + prevH, arr[x]);
		prevH = y;
		cout << l << endl;
	}
	return 0;
}