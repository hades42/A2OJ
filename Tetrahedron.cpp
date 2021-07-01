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

const ll maxSize = 100100;
bool primes[maxSize];
void precompute(){
	fill(primes, primes + maxSize, true);
	primes[0] = false;
	primes[1] = false;
	for(ll i = 2; i*i < maxSize; i++){
		if(primes[i]){
			for(ll j = i + i; j < maxSize; j+= i){
				primes[j] = false;
			}
		}
	}
}

int main() {
	ll n; cin >> n;
	vector<vector<ll>> dp(2, vector<ll>(n+1));
	dp[1][0] = 1;
	dp[0][0] = 0;
	for(ll i = 1; i <= n; i++){
		dp[1][i] = (3 * dp[0][i-1]) % MOD;
		dp[0][i] = ((2 * dp[0][i-1]) % MOD + (dp[1][i-1]) % MOD) % MOD;
	}
	cout << dp[1][n] << endl;
}