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
	ll t, sx,sy,ex,ey; cin >> t >> sx >> sy >> ex >> ey;	
	string sail; cin >> sail;
	for(int i = 0; i < t; i++){
		if(sail[i] == 'E'){
			if(sx < ex){
				sx++;
			}else{
				continue;
			}
		}
		if(sail[i] == 'S'){
			if(sy > ey){
				sy--;
			}else{
				continue;
			}
		}
		if(sail[i] == 'W'){
			if(sx > ex){
				sx--;
			}else{
				continue;
			}
		}
		if(sail[i] == 'N'){
			if(sy < ey){
				sy++;
			}else{
				continue;
			}
		}
		if(sx == ex && sy == ey){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}