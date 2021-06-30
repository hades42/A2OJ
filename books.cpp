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
	ll n, t; cin >> n >> t;
	vector<ll> books(n+1);
	for(ll i = 1; i <= n; i++){
		cin >> books[i];
	}		
	ll ans = 0, left = 1, sum = 0;
	for(ll right = 1; right <= n; right++){
		sum += books[right];
		while(sum > t){
			sum -= books[left++];
		}
		ans = max(ans, right - left + 1);
	}
	cout << ans << endl;
}