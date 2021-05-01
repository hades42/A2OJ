#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool comp(pair<ll,ll> a , pair<ll,ll>b){
	if(a.first == b.first){
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main() {
	ll n, target;
	cin >> n >> target;
	vector<ll> arr(n);
	vector<pair<ll,ll>> s(n);
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
		pair<ll,ll> p = make_pair(arr[i], i);
		s[i] = p;
	}
	sort(s.begin(), s.end(), comp);
	for(int i = 0; i < n - 2; i++){
		ll l = i + 1;
		ll r = n - 1;

		while(l < r){
			if(s[i].first + s[l].first + s[r].first == target){
				cout << s[i].second+1 << " " << s[l].second+1 << " " << s[r].second+1 << endl;
				return 0;
			} else if(s[i].first + s[l].first + s[r].first < target){
				l++;
			} else {
				r--;
			}
		}
	}

	cout << "IMPOSSIBLE" << endl;
		
}