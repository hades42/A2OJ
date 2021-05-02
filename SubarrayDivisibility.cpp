#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n;
	cin >> n;
	map<ll, ll> m;
	ll prefix = 0;
	ll count = 0;
	for(ll i = 0; i < n; i++){
		ll num; cin >> num;
		prefix += num;
		ll remain = ((prefix % n) + n) % n;
		if(remain == 0){
			count++;
		}
		if(m.find(remain) != m.end()){
			count += m[remain];
		}
		m[remain]++;
	}
	cout << count << endl;
}