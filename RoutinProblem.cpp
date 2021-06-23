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
int gcd(int a, int b){
	while(b != 0){
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
int main() {
	int a, b, c,d; cin >> a >> b >> c >> d;
	int top, bottom;
	if(a*d <= b*c){
		top = (b*c - a*d);
		bottom = b*c;
	} else{
		top = a*d - b*c;
		bottom = a*d;
	}
	int dv = gcd(top, bottom);
	cout << top/dv << "/" << bottom/dv << endl;
	return 0;
}