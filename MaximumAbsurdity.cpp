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
	ll n, k; cin >> n >> k;
	vector<ll> nums(n+1), segment(n+1);
	for(ll i = 1; i <= n; i++) cin >> nums[i];
	ll sum = 0;
	for(ll i = 1; i < k; i++){
		sum += nums[i];
	}
	for(ll i = k; i <= n; i++){
		sum += nums[i];
		segment[i - k + 1] = sum;
		sum -= nums[i-k+1];
	}
	vector<pair<ll, ll>> P; P.resize(n+1, make_pair(-1,-1));
	ll pos = 0;
	ll maxi = 0;
	for(ll i = k; i <= n; i++){
		if(maxi < segment[i - k + 1]){
			maxi = segment[i - k + 1];
			pos = i - k + 1;
		}
		P[i] = make_pair(maxi, pos);
	}
	ll a, b;
	ll maxsum = 0;
	for(ll i = k + 1; i <= n; i++){
		if(segment[i] + P[i-1].first > maxsum){
			maxsum = segment[i] + P[i-1].first; 
			a = P[i-1].second;
			b = i;
		};
	}
	cout << a << " " << b << endl;
}











