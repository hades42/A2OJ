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
	vector<ll> arr(n+1);
	vector<ll> color = {1,2,3};
	for(ll i = 0; i < m; i++){
		vector<ll> temp;
		ll a, b ,c; cin >> a >> b >> c;
		temp.push_back(a);
		temp.push_back(b);
		temp.push_back(c);
		if(!arr[a] && !arr[b] && !arr[c]){
			arr[a] = 1;
			arr[b] = 2;
			arr[c] = 3;
		}
		set<ll> s;
		for(ll j = 0; j < 3; j++){
			if(arr[temp[j]]){
				s.insert(arr[temp[j]]);
			} 
		}
		for(ll j = 0; j < 3; j++){
			if(!arr[temp[j]]){
				for(ll z = 0; z < 3; z++){
					if(!s.count(color[z])){
						arr[temp[j]] = color[z];
						s.insert(color[z]);
						break;
					}
				}
			}
		}
	}
	for(ll i =1; i <= n; i++) cout << arr[i] << " "; 
	return 0;
}