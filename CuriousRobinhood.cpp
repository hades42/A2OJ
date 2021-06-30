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
ll n,q;
ll tree[maxSize];
void update(ll x, ll val){
	while(x <= maxSize){
		tree[x] += val;
		x += (x & -x);
	}
}
ll read(ll x){
	ll res = 0;
	while(x > 0){
		res += tree[x];
		x -= ( x & -x);
	}
	return res;
}
int main() {
	ll t; cin >> t;
	for(ll cs = 1; cs <= t; cs++){
		cin >> n >> q;
		vector<ll> money(n+1);
		memset(tree, 0, sizeof tree);
		for(ll i = 1; i <= n; i++){
			cin >> money[i];
			update(i, money[i]);
		}
		cout << "Case " << cs << ":" << endl;
		while(q--){
			ll c; cin >> c;
			if(c == 1){
				ll i; cin >> i;
				i++;
				ll ans = read(i) - read(i-1);
				update(i, -ans); 
				cout << ans << endl;
			} else if(c == 2){
				ll i, v; cin >> i >> v;
				update(++i, v);
			} else{
				ll i, j; cin >> i >> j;
				++i; ++j;
				cout << read(j) - read(i-1) << endl;
			}
		}
	}
}