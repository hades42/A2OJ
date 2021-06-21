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
	string in; cin >> in;
	vector<ll> arr(26);
	for(ll i = 0; i < in.size(); i++){
		arr[in[i] - 97]++;
	}
	ll valid = 0;
	for(ll i = 0; i < 26; i++){
		if(arr[i] % 2 != 0){
			valid++;
		}
	}
	if(valid == 0){
		cout << "First" << endl;
		return 0;
	}
	if(valid % 2 == 0){
		cout << "Second" << endl;
	} else{
		cout << "First" << endl;
	}
	return 0;
}