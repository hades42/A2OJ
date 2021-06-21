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
	vector<ll> arr1(26);				
	vector<ll> arr2(26);

	string in1, in2; cin >> in1 >> in2;
	for(ll i = 0; i < in1.size(); i++){
		arr1[in1[i] - 97]++;
	}
	for(ll i = 0; i < in1.size(); i++){
		arr2[in2[i] - 97]++;
	}
	for(int i = 0; i < 26; i++){
		if(arr1[i] != arr2[i]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}