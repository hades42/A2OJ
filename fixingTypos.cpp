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
	string in; cin >> in;
	string ans;
	char ch;
	if(in.size() < 3){
		cout << in << endl;
		return 0;
	}
	for(ll i = 0; i < in.size(); i++){
		ch = in[i];
		if(i > 1 && ch == in[i-1] && ch == in[i-2]){
			continue;
		} else if(i > 2 && ch == ans[ans.size() -1] && ans[ans.size() - 2] == ans[ans.size() -3]){
			continue;
		} else{
			ans.push_back(ch);
		}
	}
	cout << ans << endl;
}