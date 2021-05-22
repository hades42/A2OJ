#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007;
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<ll> num(n+1);
	for(int i = 1; i <= n; i++) cin >> num[i]; 
	vector<ll> sortNum = num;
	sort(sortNum.begin(), sortNum.end());

	for(int i = 2; i <= n; i++){
		num[i] += num[i-1];
		sortNum[i] += sortNum[i-1];
	}

	ll q; cin >> q;
	while(q--){
		ll t,a,b; cin >> t >> a >> b;
		if(t == 1) cout << num[b] - num[a-1] << endl;
		else cout << sortNum[b] - sortNum[a-1] << endl;
	}
	return 0;
}