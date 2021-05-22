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
void cmp(){

}
vector<vector<ll>> meanArray(vector<vector<ll>> arr){
	vector<double> mean(arr.size());
	for(ll i = 0; i < arr.size(); i++){
		ll sum = 0;
		for(ll j = 0; j < arr[i].size(); j++){
			sum += arr[i][j];
		}
		mean[i] = sum/arr[i].size();
	}
	vector<vector<ll>> divide;
	for(ll i = 0; i < arr.size(); i++){
		vector<ll> cmp;
		if(mean[i] != -1) cmp.push_back(i);
		for(ll j = i + 1; j < arr.size(); j++){
			if(mean[i] == mean[j]){
				cmp.push_back(j);
				mean[j] = -1;
			}
		}
	}
	set<vector<ll>> s;
	for(ll i = 0; i < divide.size(); i++){
		s.insert(divide[i]);
	}
	vector<vector<ll>> ans;
	for(auto it = s.begin(); it != s.end(); it++){
		ans.push_back(*it);
	}
	return ans;
}

int main() {
	vector<vector<ll>> test {
		{3,3,4,2},
		{4,4},
		{2,3},
		{3,3,3}
	};
	vector<vector<ll>> ans = meanArray(test);
	print2d(ans);
}