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
	string o, g; 
	cin >> o >>  g;
	ll sum = 0;
	for(ll i = 0; i < o.size(); i++){
		if(o[i] == '+') sum++;
		else sum--;
	}
	ll cq = 0;
	ll sumg = 0;
	for(ll i = 0; i < g.size(); i++){
		if(g[i] == '?') cq++;
		if(g[i] == '+') sumg++;
		else if(g[i] == '-') sumg--;
	}
	if(cq == 0){
		if(sumg == sum){
			printf("%.12f\n", (double)1);
		} else{
			printf("%.12f\n", (double)0);
		}
		return 0;
	}
	double all = 0;
	double right = 0;
	for(ll mask = 0; mask < (1 << cq); mask++){
		ll temp = 0;
		for(ll i = 0; i < cq; i++){
			if(mask & (1 << i)){
				temp++;
			} else temp--;
		}
		if(temp + sumg == sum){
			right++;
		}
		all++;
	}
	printf("%.12f\n", (right/all));
	return 0;
}