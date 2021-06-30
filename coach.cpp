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
ll n, m;
vector<ll> marked(49);
vector<vector<ll>> team;
void dfs(ll node, vector<vector<ll>> g){
	stack <ll> stack;	
	stack.push(node);
	vector<ll> connect;
	while(!stack.empty()){
		node = stack.top();
		stack.pop();

		if(!marked[node]){
			marked[node] = true;
			connect.push_back(node);
		}

		for(ll i = 1; i <= n; i++){
			if(g[node][i] == 1 && !marked[i]){
				stack.push(i);
			}
		}
	}
	team.push_back(connect);
}
int main() {
	cin >> n >> m;
	vector<vector<ll>> g(n+1, vector<ll>(n+1));
	for(ll i = 0; i < m; i++){
		ll a, b; cin >> a >> b;
		g[a][b] = 1;
		g[b][a] = 1;
	}
	for(ll i = 1; i <= n; i++){
		if(!marked[i]){
			dfs(i, g);
		}
	}
	queue<vector<ll>> s1;
	queue<vector<ll>> s2;
	vector<vector<ll>> s3;
	for(ll i = 0; i < team.size(); i++){
		if(team[i].size() > 3){
			cout << -1 << endl;
			return 0;
		}
		if(team[i].size() == 3){
			s3.push_back(team[i]);
		}
		if(team[i].size() == 2){
			s2.push(team[i]);
		}
		if(team[i].size() == 1){
			s1.push(team[i]);
		}
	}
	if(s2.size() > s1.size()){
		cout << -1 << endl;
		return 0;
	} else{
		while(!s2.empty()){
			vector<ll> t2 = s2.front();
			vector<ll> t1 = s1.front();
			t2.push_back(t1[0]);
			s3.push_back(t2);
			s2.pop();
			s1.pop();
		}
	}
	if(!s1.empty()){
		if(s1.size() % 3 != 0){
			cout << -1 << endl;
			return 0;
		} else{
			while(!s1.empty()){
				vector<ll> temp;
				ll first = s1.front()[0];
				s1.pop();
				ll second = s1.front()[0];
				s1.pop();
				ll third = s1.front()[0];
				s1.pop();

				temp.push_back(first);
				temp.push_back(second);
				temp.push_back(third);

				s3.push_back(temp);
			}
		}
	}
	for(ll i = 0; i < s3.size(); i++){
		for(ll j = 0; j < s3[i].size(); j++){
			cout << s3[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}