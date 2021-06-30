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
vector<ll> counta(6);
vector<ll> countb(6);
ll a, b;
void precompute(){
	while(a % 2 == 0){
		a /= 2;
		counta[2]++;
	} 
	while(a % 3 == 0){
		a /= 3;
		counta[3]++;
	} 

	while(a % 5 == 0){
		a /= 5;
		counta[5]++;
	} 

	while(b % 2 == 0){
		b /= 2;
		countb[2]++;
	} 

	while(b % 3 == 0){
		b /= 3;
		countb[3]++;
	} 

	while(b % 5 == 0){
		b /= 5;
		countb[5]++;
	} 
}
int main() {
	cin >> a >> b;
	if(a==b){
		cout << 0 << endl;
		return 0;
	}
	precompute();	
	if(a != b){
		cout << -1 << endl;
		return 0;
	}
	cout << abs(counta[2] - countb[2]) + abs(counta[3] - countb[3]) + abs(counta[5] - countb[5]) << endl;
	return 0;
}