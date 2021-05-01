#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, t; cin >> n >> t;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
	}
	ll low = 0, high = 1e18; 
	ll ans;
	while(low <= high){
		ll mid = (high + low)/2;
		ll sum = 0;
		for(int i = 0; i < n; i++){
			sum += (mid/arr[i]);
			if(sum >= t){
				break;
			}
		}
		if(sum >= t){
			high = mid -1;
			ans = mid;
		} else {
			low = mid + 1;
		}
	}
	cout << ans << endl;
}