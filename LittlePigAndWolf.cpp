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
	ll n, m; cin >> n >> m;
	vector<vector<char>> arr(n+2, vector<char>(m+2));
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= m; j++){
			cin >> arr[i][j];
		}
	}
	ll eaten = 0;
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= m; j++){	
			if(arr[i][j] == 'W'){
				if(arr[i+1][j] == 'P' || arr[i][j+1] == 'P' || arr[i-1][j] == 'P' || arr[i][j-1] == 'P'){
					eaten++;
				}
			}
		}
	}
	cout << eaten << endl;
	return 0;
}