#include <bits/stdc++.h>
#define ll long long
const ll MOD = 1000000007;
const ll INF = 1e18;
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

const ll maxSize = 100100;
bool primes[maxSize];
void precompute(){
	fill(primes, primes + maxSize, true);
	primes[0] = false;
	primes[1] = false;
	for(ll i = 2; i*i < maxSize; i++){
		if(primes[i]){
			for(ll j = i + i; j < maxSize; j+= i){
				primes[j] = false;
			}
		}
	}
}

int main() {
	precompute();
	ll n, m; cin >> n >> m;
	vector<vector<ll>> matrix(n, vector<ll>(m));
	vector<ll> row(n);
	vector<ll> col(m);
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++){
			cin >> matrix[i][j];
			ll x = matrix[i][j];
			while(!primes[x]){
				++x;
			}
			row[i]+= (x - matrix[i][j]);
			col[j]+= (x - matrix[i][j]);
		}
	}	
	ll smallrow = *min_element(row.begin(), row.end());
	ll smallcol = *min_element(col.begin(), col.end());
	cout << min(smallcol, smallrow) << endl;
}