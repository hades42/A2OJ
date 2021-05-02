#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n,k; cin >> n >>k;
	ll mx = 0;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
		mx = max(mx, arr[i]);
	}
	ll low = mx;
	ll high = 1e18;
	ll maxSum = 1e18;
	while(low <= high){
		ll mid = low + (high - low)/2;
		ll block = 1;
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			if(sum + arr[i] > mid){
				sum = 0;
				block++;
			}
			sum+= arr[i];
		}
		if(block > k){
			low = mid + 1;
		} else{
			if(mid < maxSum){
				maxSum = mid;
			}
			high = mid - 1; 
		}
	}	
	cout << maxSum << endl;
}