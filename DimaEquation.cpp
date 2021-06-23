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
ll sumDigit(ll num){
	ll ans = 0;
	while(num > 0){
		ans += num % 10;
		num/= 10;
	}
	return ans;
}
int main() {
	ll a,b,c; cin >> a >> b >> c;
	vector<ll> ans;
	for(ll digit = 1; digit <= 81; digit++){
		ll x = b*pow(digit, a) + c;
		if(sumDigit(x) == digit && x > 0 && x < 1e9){
			ans.push_back(x);
		}
	}
	cout << ans.size() << endl;
	for(auto num : ans) cout << num << " "; 
	return 0;
}







