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

const ll maxSize = 2001000;
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
vector<ll> tree(maxSize); 
void update(ll x, ll val){
	while(x <= maxSize){
		tree[x] += val;
		x += (x & -x);
	}
}
ll read(ll x){
	ll sum = 0;
	while(x > 0){
		sum += tree[x];
		x-= (x & -x);
	}
	return sum;
}
int main() {
	ll n, m, c;
	cin >> n >> m >> c;
	vector<ll> heap(n+1);
	for(ll i = 1; i <= n; i++){
		heap[i] = c;
		update(i, c);
	}
	for(ll i = 1; i <= m; i++){
		char c; cin >> c;
		if(c == 'Q'){
			ll p; cin >> p;
			cout << read(p) << endl;
		} else{
			ll u,v,k; cin >> u >> v >> k;
			update(u, k);
			update(v+1, -k);
		}
	}
}