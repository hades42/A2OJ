#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1000000007;
const ll INF = 1e18;
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
	vector<ll> cnt(100005);
	ll n; cin >> n;
	ll maxi = 0;
	for(ll i = 0; i < n; i++){
		ll num; cin >> num;
		cnt[num]++;
		if(num > maxi){
			maxi = num;
		}
	}
	vector<ll> dp(100005);
	dp[0] = 0;
	dp[1] = cnt[1];
	for(ll i = 2; i <= maxi; i++){
		dp[i] = max(dp[i-1], dp[i-2] + cnt[i]*i);
	}
	cout << dp[maxi] << endl;
}