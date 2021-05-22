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

vector<vector<ll>> graph(205);
vector<ll> visited(205);
void dfs(ll v){
	visited[v] = 1;
	for(ll i = 0; i < graph[v].size(); i++){
		if(visited[graph[v][i]] == 0){
			dfs(graph[v][i]);
		}
	}
}
int main() {
	ll n,m; cin >> n >> m;
	ll countLang = 0;
	for(ll i = 0; i < n; i++){
		ll numLang; cin >> numLang;
		countLang += numLang;
		for(ll j = 0; j < numLang; j++){
			ll y; cin >> y;
			graph[i+1].push_back(y+n);
			graph[y+n].push_back(i+1);
		}
	}
	if(countLang == 0) cout << n << endl;
	else{
		int c = 0;
		for(int i = 1; i <= n; i++){
			if(visited[i] == 0){
				c++;
				dfs(i);
			}
		}
		cout << c -1 << endl;
	}
	return 0;
}