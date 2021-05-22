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
	vector<ll> arr(8);
	for(ll i = 0; i < n; i++){
		ll num; cin >> num;
		arr[num]++;
	}		
	if(arr[5] || arr[7]){
		cout << -1 << endl;
		return 0;
	}
	if(arr[1] == n/3 && arr[2] >= arr[4] && arr[2] + arr[3] == arr[4] + arr[6] && arr[1] == arr[2] + arr[3]){
		for(ll i = arr[4]; i > 0; i--){
			cout << "1 2 4" << endl;
			arr[4]--;
			arr[2]--;
		}
		for(ll i = arr[3]; i > 0; i--){
			cout << "1 3 6" << endl;
			arr[3]--;
			arr[6]--;
		}
		for(ll i = arr[2]; i > 0; i--){
			cout << "1 2 6" << endl;
			arr[2]--;
			arr[6]--;
		}
	}else{
		cout << -1 << endl;
	}
	return 0;
}