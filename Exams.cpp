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
	vector<pair<ll, ll>> arr(n);
	for(ll i =0; i < n; i++){
		ll a, b; cin >> a >> b;
		pair<ll, ll> p = make_pair(a,b);
		arr[i] = p;
	}
	sort(arr.begin(), arr.end());
	ll curr = min(arr[0].first, arr[0].second);
	for(ll i = 1; i < arr.size(); i++){
		if(arr[i].second < arr[i].first && arr[i].second >= curr){
			curr = arr[i].second;
		} else {
			curr = arr[i].first;
		}
	}
	cout << curr << endl;
}