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
	map< pair<ll, ll>, ll> m;
	ll cashes = 0;
	for(ll i = 0; i < n; i++){
		ll a , b; cin >> a >> b;
		pair<ll,ll> p = make_pair(a,b);
		m[p]++;
		cashes = max(cashes, m[p]);
	}
	cout << cashes << endl;
	return 0;
}