#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n;
	cin >> n;
	vector<array<ll,3>> arr(n);
	for(ll i = 0; i < n; i++){
		ll a , b;
		cin >> a >> b;
		arr[i] = {a,b,i};
	}
	sort(arr.begin(), arr.end());
	vector<ll> ans(n);
	priority_queue<array<ll,2>, vector<array<ll,2>>, greater<array<ll,2>>> pq;
	for(array<ll,3> arr : arr){
		ll arrive = arr[0];
		ll depart = arr[1]; 
		ll pos = arr[2];
		if(pq.empty() || pq.top()[0] >= arrive){
			ans[pos] = pq.size() + 1;
		} else{
			ans[pos] = pq.top()[1];
			pq.pop();
		}
		pq.push({depart, ans[pos]});
	}
	cout << pq.size() << endl;
	for(auto v : ans) cout << v << " ";
	cout << endl;
	return 0;
}