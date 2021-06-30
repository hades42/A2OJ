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
vector<ll> num;
void precompute(ll curr, ll four, ll seven){
	if(curr <= 1e10){
		if(four == seven){
			num.push_back(curr);
		}
		precompute(curr*10 + 4, four+1, seven);		
		precompute(curr*10 + 7, four, seven+1);
	}
}
int main() {
	precompute(4, 1, 0);
	precompute(7, 0, 1);
	ll n; cin >> n;
	sort(num.begin(), num.end());
	cout << *lower_bound(num.begin(),num.end(),n ) << endl;
}