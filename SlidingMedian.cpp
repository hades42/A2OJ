#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m;
vector<ll> arr(200010);
multiset<ll> up;
multiset<ll> low;

void ins(ll num){
	ll med = *low.rbegin();
	if(num > med){
		up.insert(num);
		if(up.size() > m/2){
			low.insert(*up.begin());
			up.erase(up.find(*up.begin()));
		}
	} else{
		low.insert(num);
		if(low.size() > (m+1)/2){
			up.insert(*low.rbegin());
			low.erase(low.find(*low.rbegin()));
		}
	}
}

void er(ll num){
	if(up.find(num) != up.end()){
		up.erase(up.find(num));
	} else{
		low.erase(low.find(num));
	}
	if(low.empty()){
		low.insert(*up.begin());
		up.erase(up.find(*up.begin()));
	}
}
int main() {
	cin >> n >> m;
	for(ll i = 0; i < n; i++) cin >> arr[i];
	low.insert(arr[0]); 
	for(ll i =1; i < m; i++) ins(arr[i]);
	cout << *low.rbegin() << " ";
	for(ll i = m; i < n; i++){
		if(m == 1){
			ins(arr[i]);
			er(arr[i-m]);
		} else{
			er(arr[i-m]);
			ins(arr[i]);
		}
		cout << *low.rbegin() << " ";
	}
	return 0;
}