#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007;
#define INF 1e18
using namespace std;

template<typename T>
void print(const T& t) {
    std::copy(t.cbegin(), t.cend(), std::ostream_iterator<typename T::value_type>(std::cout, " "));
    cout << endl;
}

template<typename T>
void print2d(const T& t) {
    std::for_each(t.cbegin(), t.cend(), print<typename T::value_type>);
}
ll factor(ll num){
	ll ans = 1;
	for(ll i = 1; i <= num; i++){
		ans *= i;
	}
	return ans;
}
int main() {
	ll n; cin >> n;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
	}
	ll mx = arr[0];
	ll mn = arr[0];
	for(ll i = 0; i < n; i++){
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}
	ll mxNum = 0; 
	ll mnNum = 0;
	for(ll i = 0;i < n; i++){
		if(arr[i] == mx){
			mxNum++;
		}
		if(arr[i] == mn){
			mnNum++;
		}
	}
	if(mx == mn){
		cout << mx - mn << " " << n * (n-1)/2 << endl;
		return 0;
	}
	cout << mx - mn << " " << mxNum * mnNum << endl;
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
