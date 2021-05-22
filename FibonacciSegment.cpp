#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007;
#define INF 1e18
using namespace std;

int main() {
	ll n; cin >> n;
	vector<ll> arr(n);
	for (ll i = 0; i < n; i++) cin >> arr[i];
	ll currLength, maxLength;
	currLength = maxLength = (n >= 2) ? 2 : n;
	for (int i = 2; i < n; i++) {
		if (arr[i] == arr[i - 1] + arr[i - 2]) {
			currLength++;
		} else {
			if (currLength > maxLength) {
				maxLength = currLength;
			}
			currLength = 2;
		}
	}
	maxLength = max(currLength, maxLength);
	cout << maxLength << endl;
}