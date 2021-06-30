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

const ll maxSize = 200100;
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
ll n, q;
void update(ll x, ll val){
	while(x <= n){
		tree[x] += val;
		x += (x & -x);
	}
}

ll read(ll x){
	ll sum = 0;
	while(x > 0){
		sum += tree[x];
		x -= (x & -x);
	}
	return sum;
}
int main() {
	cin >> n >> q;
	vector<ll> nums(n);
	vector<ll> frequence(n+1);
	for(ll i = 0 ; i < n; i++) cin >> nums[i];	
	sort(nums.begin(), nums.end());
	while(q--){
		ll x, y; cin >> x >> y;
		update(x, 1);
		update(y+1, -1);
	}	
	for(ll i =1; i <= n; i++){
		frequence[i-1] = read(i);
	}
	sort(frequence.begin(), frequence.end());
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		ans += nums[i] * frequence[i+1];
	}
	cout << ans << endl;
}