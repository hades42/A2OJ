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
ll cb = 0,cs = 0,cc = 0;
ll nb,ns,nc; 
ll pb,ps,pc;
ll r; 

ll price(ll num){
	ll priceb = max((ll)0, num*cb - nb)*pb;
	ll prices = max((ll)0, num*cs - ns)*ps;
	ll pricec = max((ll)0, num*cc - nc)*pc;

	ll final = priceb + prices + pricec;
	return final;
}
int main() {
	string input; cin >> input;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	for(ll i = 0; i < input.size(); i++){
		if(input[i] == 'B') cb++;
		else if(input[i] == 'C') cc++;
		else cs++;
	}
	ll low = 0; ll high = 1e13;
	ll mid;
	ll ans;
	while(low <= high){
		 mid = low + (high - low)/2;
		ll need = price(mid);
		if(need == r){
			cout << mid << endl;
			return 0;
		}
		if(need > r){
			high = mid - 1;
		} else{
			ans = mid;
			low = mid + 1;
		}
	}
	cout << ans << endl;
}








