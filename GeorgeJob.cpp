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

vector<vector<ll>> dp(5005, vector<ll>(5005));
vector<ll> sum(5005), x(5005);

int main() {
	ll n,m,k; cin >> n >> m >> k;
	vector<vector<ll>> dp2(n+1, vector<ll>(k+1));
	for(ll i = 1; i <= n; i++){
		cin >> x[i];
		sum[i] = sum[i-1] + x[i];
	}		
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= k; j++){
			if(i >= m){
				dp2[i][j] = max(dp2[i-1][j], dp2[i-m][j-1] + sum[i] - sum[i-m]);
			}
		}
	}
	print2d(dp2);
	return 0;
}








