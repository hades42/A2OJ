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
	ll n, m;
	cin >> n >> m;
	vector<ll> energy(n+1); 
	for(ll i = 1; i <= n; i++){
		cin >> energy[i];
	}
	vector<vector<ll>> g(n+1, vector<ll>(n+1));
	for(int i = 0; i < m; i++){
		ll a, b; cin >> a >> b;
		g[a][b] = energy[b];
		g[b][a] = energy[a];
	}
	ll ans = 0;
	for(ll i = 1; i <= n; i ++){
		for(ll j = 1; j <= n; j++){
			if(g[i][j] <= g[j][i]){
				ans += g[i][j];
			}else{
				ans += g[j][i];
			}	
			g[i][j] = 0;
			g[j][i] = 0;
		}
	}
	cout << ans << endl;
}