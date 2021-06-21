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
	vector<ll> rib(3);
	ll n;
	cin >> n >> rib[0] >> rib[1] >>rib[2]; 
	vector<ll> dp(n+1);
	for(ll i = 0; i <= n; i++) dp[i] = -INF;
	dp[0] = 0;
	for(ll i = 0; i < 3; i++){
		for(ll j = rib[i]; j <= n; j++){
			dp[j] = max(dp[j], dp[j - rib[i]] + 1);
		}
	}
	cout << dp[n] << endl;
}