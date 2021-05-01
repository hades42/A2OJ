#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(ll i = 0; i< n; i++){
		cin >> arr[i];
	}
	stack<pair<ll,ll> > s;
	for(ll i = 0; i < n; i++){
		while(!s.empty() && s.top().first >= arr[i]){
			s.pop();
		}
		if(s.empty()){
			cout << 0 << " ";
		} else{
			cout << s.top().second << " ";
		}
		s.push({arr[i], i+1});
	}
	return 0;
}