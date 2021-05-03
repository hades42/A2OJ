#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

int main() {
	ll n,a,b; cin >> n >> a >> b;
	vector<ll> arr(n+1);
	for(ll i = 1; i <= n; i++){
		cin >> arr[i];
	}
	for(ll i = 1; i <= n; i++){
		arr[i] += arr[i-1];
	}
	set<pair<ll,ll>> bound;
	for(ll i = a; i <= b; i++){
		bound.insert({arr[i], i});
	}
	ll maxSum = -INF;
	for(ll i = 1; i <= n-a+1; i++){
		maxSum = max(maxSum, bound.rbegin() -> first - arr[i-1]);
		bound.erase({arr[i+a - 1], i+a -1});
		if(i+b <= n){
			bound.insert({arr[i+b], i+b});
		}
	}
	cout << maxSum << endl;
}