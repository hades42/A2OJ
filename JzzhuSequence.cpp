#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1000000007;
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
	ll x, y;
	cin >> x >> y;
	ll n; cin >> n;
	vector<ll> arr(7);
	arr[0] = x; arr[1] = y;
	for(ll i = 2; i< 6; i++){
		arr[i] = arr[i-1] - arr[i-2];
	}
	cout << (arr[(n-1) % 6] % MOD + MOD) % MOD << endl;
}
