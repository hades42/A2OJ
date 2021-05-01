#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n;
	cin >> n;
	ll mx = 0;
	ll sum = 0;
	for(ll i = 0; i < n; i++){
		ll num;
		cin >> num;
		mx = max(mx, num);
		sum += num;
	}
	if(mx > (sum - mx)){
		cout << 2*mx << endl;
	} else{
		cout << sum  << endl;
	}
	return 0;
}