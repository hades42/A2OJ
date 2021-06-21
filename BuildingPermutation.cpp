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
	vector<ll> arr(n+1); 
	ll ans = 0;
	for(ll i = 1; i <= n; i++){
		cin >> arr[i];
	}
	sort(arr.begin()+1, arr.end());
	for(ll i = 1; i <= n; i++){
		ans += abs(arr[i] - i);
	}
	cout << ans << endl;
}