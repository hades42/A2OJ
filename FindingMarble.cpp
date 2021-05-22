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
	ll n, s, t;
	cin >> n >> s >> t;
	vector<ll>arr(n+1);
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	ll step = 0;
	while(arr[s] != 0 && s != t){
		ll temp = arr[s];
		arr[s] = 0;
		s = temp;
		step++;
	}
	if(s == t) cout << step << endl;
	else cout << -1 << endl;
	return 0;
}