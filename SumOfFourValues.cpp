#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, target;
	cin >> n >> target;
	vector<pair<ll, ll>> arr(n);
	for (int i = 0; i < n; i++) {
		ll num;
		cin >> num;
		pair<ll, ll> p = make_pair(num, i+1 );
		arr[i] = p;
	}
	sort(arr.begin(), arr.end());
	for (ll i = 0; i < n - 3; i++) {
		for (ll j = i + 1; j < n - 2; j++) {
			ll l = j + 1;
			ll r = n - 1;

			while (l < r) {
				if (arr[i].first + arr[j].first + arr[l].first + arr[r].first == target) {
					cout << arr[i].second << " " << arr[j].second << " " << arr[l].second << " " << arr[r].second << endl;
					return 0;
				}
				else if (arr[i].first + arr[j].first + arr[l].first + arr[r].first < target) {
					l++;
				} else {
					r--;
				}
			}
		}
	}
	cout << "IMPOSSIBLE" << endl;
}