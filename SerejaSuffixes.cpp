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
vector<ll> arr(100005);
int main() {
	ll n,m; cin >> n >> m;
	vector<ll> temp(n);
	for(int i = 0; i < n; i++){
		cin >> temp[i];
	}
	set<ll> s;
	for(ll i = n -1; i>= 0; i--){
		s.insert(temp[i]);
		arr[i+1] = s.size();
	}
	for(ll i = 0; i < m; i++){
		ll c; cin >> c;
		cout << arr[c] << endl;
	}
	return 0;
}
