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
	ll n, k,d; cin >> n >> k >> d;
	vector<vector<ll>>dp(n+1, vector<ll>(2));
	dp[0][0] = 1;
	dp[0][1] = 0;

	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= k; j++){
			if(i - j < 0) break;
			if(j < d){
				dp[i][0] = ( dp[i][0] + dp[i-j][0]) % MOD;
				dp[i][1] = (dp[i][1] + dp[i-j][1]) % MOD;
			} else{
				dp[i][1] = (dp[i][1] + dp[i-j][0]) %MOD;
				dp[i][1] = (dp[i][1]+ dp[i-j][1]) %MOD;
			}
		}
	}
	print2d(dp);
	cout << dp[n][1] << endl;
}