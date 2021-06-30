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
	ll r,g,b; cin >> r >> g >> b;
	ll mn1 = min(r,g);
	ll mn = min(mn1, b);
	ll ans = 0;
	for(ll i = 0; i <= 10000 && i <= mn; i++){
		ll temp = (r-i)/3 + (g-i)/3 + (b-i)/3 + i;
		ans = max(ans, temp);
	}
	cout << ans << endl;
	return 0;
}