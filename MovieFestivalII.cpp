#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, k; cin >> n >> k;
	vector<pair<ll,ll>> arr(n);
	for(ll i = 0; i < n; i++){
		ll a, b; cin >> a >> b;
		pair<ll,ll> p = make_pair(b,a);
		arr[i] = p;
	}
	sort(arr.begin(), arr.end());

	ll ans = 0;
	multiset<ll> end_times;
	for(ll i = 0; i < k; i++){
		end_times.insert(0);
	}
	for(ll i = 0; i < n; i++){
		auto it = end_times.upper_bound(arr[i].second);	
		if(it == end_times.begin()) continue;
		end_times.erase(--it);
		end_times.insert(arr[i].first);
		++ans;
	}
	cout << ans << endl;
}