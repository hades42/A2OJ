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
	ll a,b,c; cin >> a >> b >> c;
	ll sum = a + b + c;
	if(sum % 2 == 0){
		ll bonds = sum/2;
		ll x = bonds - c;
		ll y = bonds - a;
		ll z = bonds - b;
		if(x >= 0 && y >= 0 && z >= 0){
			cout << x << " " << y << " " << z << endl;
		} else{
			cout << "Impossible" << endl;
		}
	} else{
		cout << "Impossible" << endl;
	}
	return 0;
}