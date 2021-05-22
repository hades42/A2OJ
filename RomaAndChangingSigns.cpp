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

int main() {
	ll n, k; cin >> n >> k;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
	}		
	for(ll i=0;k>0;i++){
		if(arr[i] < 0){
			arr[i] *= -1;
			k--;
		} else{
			break;
		}
	}
	sort(arr.begin(), arr.end());
	if(k > 0){
		if(k % 2 != 0){
			arr[0] *= -1;	
		}	
	}
	ll sum = 0;
	for(ll i = 0; i < n; i++) sum += arr[i];
	cout << sum << endl;
	return 0;
}