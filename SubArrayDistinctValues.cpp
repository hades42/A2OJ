#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, k; cin >> n >> k;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
	}
	map<ll,ll> m;
	ll num = 0;
	ll l = 0;
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		if(m[arr[i]] == 0) num++;
		m[arr[i]]++;
		if(num > k){
			for(; num > k; l++){
				m[arr[l]]--;
				if(m[arr[l]] == 0) num--;
			}
		}
		ans += i - l + 1;
	}
	cout << ans << endl;
}