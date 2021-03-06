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
	ll n; cin >> n;
	vector<ll> arr(n);
	vector<ll> temp(n);
	ll sum = 0;
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
		if(arr[i] == 0){
			temp[i] = 1;
		} else{
			temp[i] = -1;
		}
	}
	ll mx = temp[0];
	ll curr = mx;
	for(ll i=1; i < n; i++){
		curr = max(temp[i], temp[i] + curr);
		mx = max(mx, curr);
	}
	cout << sum + mx << endl;
}




























