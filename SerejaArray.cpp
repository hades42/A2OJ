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
	string in1, in2; cin >> in1 >> in2;
	if(in1.size() != in2.size()){
		cout << "NO" << endl;
		return 0;
	}
	vector<ll> change;	
	ll valid = 0;
	for(ll i = 0; i < in1.size(); i++){
		if(in1[i] != in2[i]){
			valid++;
			change.push_back(i);
		}
	}
	if(valid > 2){
		cout << "NO" << endl;
	} else{
		if(in1[change[0]] == in2[change[1]] && in1[change[1]] == in2[change[0]]){
			cout << "YES" << endl;
		} else cout << "NO" << endl;
	}
	return 0;
}















