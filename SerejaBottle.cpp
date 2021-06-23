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
	vector<pair<ll, ll>> arr(n+1);
	for(ll i = 1; i <= n; i++){
		ll a, b; cin >> a >> b;
		arr[i] = make_pair(a,b);
	}
	ll count = 0;
	for(ll i =1; i <= n; i++){
		ll find = false;
		for(ll j = 1; j <= n; j++){
			if(i == j) continue;
			if(arr[i].first == arr[j].second){
				find = true;
				break;
			}
		}
		if(!find){
			count++;
		}
	}	
	cout << count << endl;
}