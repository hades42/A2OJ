#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n;
	cin >> n;
	vector<pair<ll,ll> > arr(n);
	for(ll i = 0; i < n; i++){
		ll a,b; cin>> a >> b;
		pair<ll,ll> p = make_pair(a,b);
		arr[i] = p;
	}
	sort(arr.begin(), arr.end());
	ll time = 0;
	ll sum = 0;
	for(int i = 0; i< n; i++){
		time+= arr[i].first;
		sum += (arr[i].second - time);
	}
	cout << sum << endl;
}