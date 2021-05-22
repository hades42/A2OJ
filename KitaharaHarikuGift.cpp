#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007;
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<ll> w(n);	
	ll sum = 0;
	for(ll i = 0; i< n; i++){
		 cin >> w[i];
		 sum += w[i];
	}
	if((sum/100) % 2 != 0){
		cout << "NO" << endl;
		return 0;
	}
	ll half = sum/2;
	vector<ll> dp((half/100) + 1);
	dp[0] = 1;
	for(ll i = 0; i < n; i++){
		for(ll j = half; j >= w[i]; j-=100){
			dp[j/100] |= dp[(j-w[i])/100];
		}
	}
	if(dp[half/100]) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}