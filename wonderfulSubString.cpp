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
	string word;
	cin >> word;
	ll res = 0, curr = 0;
	vector<ll>count(1024);
	count[0] = 1;
	for(char c : word){
		cout << "count[0]: " << count[0] << endl;	
		curr ^= 1 << (c - 'a');	
		cout << curr << endl;
		res += count[curr];
		cout << res << " " << count[curr] << endl;
		count[curr] += 1;
		cout << "curr: " << curr << " " << count[curr] << endl;
		cout << endl;
		for(ll j = 0; j < 10; j++){
			ll delta = curr ^ (1 << j);
			cout << "delta: " << delta << " " << count[delta] << endl;
			res += count[delta]; 
		}
		cout << endl;
	}

	cout << "Ans: " << res << endl;
}