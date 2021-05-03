#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m;
vector<ll> arr(200010);
multiset<ll> up;
multiset<ll> low;
ll sLow, sUp;

void ins(ll num){
	ll med = *low.rbegin();
	if(num > med){
		up.insert(num); sUp += num;
		if(up.size() > m/2){
			ll moving = *up.begin();
			low.insert(*up.begin()); sLow+= moving;
			up.erase(up.find(*up.begin())); sUp -= moving;
		}
	} else{
		low.insert(num); sLow += num;
		if(low.size() > (m+1)/2){
			ll moving = *low.rbegin();
			up.insert(*low.rbegin()); sUp += moving;
			low.erase(low.find(*low.rbegin())); sLow -= moving;
		}
	}
}

void er(ll num){
	if(up.find(num) != up.end()){
		up.erase(up.find(num));
		sUp -= num;
	} else{
		low.erase(low.find(num));
		sLow -= num;
	}
	if(low.empty()){
		ll moving = *up.begin();
		low.insert(*up.begin()); sLow += moving;
		up.erase(up.find(*up.begin())); sUp -= moving;
	}
}
ll med(){return (m%2 == 0) ? 0 : (*low.rbegin());}
int main() {
	cin >> n >> m;
	for(ll i = 0; i < n; i++) cin >> arr[i];
	low.insert(arr[0]); sLow += arr[0]; 
	for(ll i =1; i < m; i++) ins(arr[i]);
	cout << sUp - sLow + med(); if(n != 1) cout << " ";
	for(ll i = m; i < n; i++){
		if(m == 1){
			ins(arr[i]);
			er(arr[i-m]);
		} else{
			er(arr[i-m]);
			ins(arr[i]);
		}
		cout << sUp - sLow + med() << " ";
	}
	return 0;
}