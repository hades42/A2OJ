#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, target;
	cin >> n >> target;
	ll ans = 0;
	ll prefix = 0;
	map<ll,ll> m;
	for(ll i = 0; i < n; i ++){
		ll num; cin >> num;
		prefix += num;
		if(prefix == target){
			ans++;
		}
		if(m.find(prefix - target) != m.end()){
			ans += m[prefix - target];
		}
		m[prefix]++;
	}
	cout << ans << endl;
}