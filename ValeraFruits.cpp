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
	vector<pair<ll,ll>> arr(n+1);
	for(ll i = 1; i <= n; i++){
		ll a, b; cin >> a >> b;
		pair<ll, ll> p = make_pair(a,b); 
		arr[i] = p;
	}
	sort(arr.begin(), arr.end()); 
	ll collect = 0;
	for(ll i = 1; i <= n; i++){
		ll able = v;
		if(arr[i].first == i && arr[i].second >= v){
			collect += able;
			arr[i].second -= able;
		}
		while(arr[i].first == i && arr[i].second < v){
			collect += arr[i].second;
			able -= arr[i].second;
			i++;
		}
	}
	cout << collect << endl;
}