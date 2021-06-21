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
	ll n, m; cin >> n >> m;
	set<ll> s;
	for(ll i = 0; i < m; i++){
		ll a, b; cin >> a >> b;
		s.insert(a);
		s.insert(b);
	}
	ll central;
	for(ll i = 1; i <= n; i++){
		if(s.count(i) == 0){
			central = i;
			break;
		}
	}
	cout << n -1 << endl;
	for(ll i = 1; i <= n; i++){
		if(i == central) continue;	
		cout << central << " " << i << endl;
	}
	return 0;
}
