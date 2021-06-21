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
	vector<vector<char>> arr(n, vector<char>(m));
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++){
			cin >> arr[i][j]; 
			 if(arr[i][j] == '-'){
			 	continue;
			 } else{
			 	if((i+j) % 2 == 0){
			 		arr[i][j] = 'B';
			 	} else{
			 		arr[i][j] = 'W';
			 	}
			 }
		}
	}		
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}