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
	ll n, v; cin >> n >> v;	
	vector<ll> arr(3005);
	for(ll i = 1; i <= n; i++){
		ll a,b; cin >> a >> b;
		arr[a] += b;
	}
	ll collect = 0;
	for(ll i = 1; i <= 3001; i++){
		ll left = v;
		if(arr[i-1] >= left){
			collect += left;
			arr[i-1] -= left;
			left = 0;
		} else if (arr[i-1]){
			collect += arr[i-1];
			left -= arr[i-1];
			arr[i-1] = 0;
		}
		if(left){
			if(arr[i] >= left){
				collect += left;
				arr[i] -= left;	
			} else if(arr[i]){
				collect += arr[i];
				arr[i] = 0;
				left = 0;
			}
		}
	}
	cout << collect << endl;
	return 0;
}