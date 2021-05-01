#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <algorithm>
#define ll long long


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    cin >> s >> n;
    string arr[n];
    for (int x = 0; x < n; x++)
        cin >> arr[x];


        char last = s[s.size() - 1];
        int count['z' + 1] = {0};
        for(int i = 0; i< 123; i++){
            cout << count[i] << " ";
        }
        vector<string> v;
        for (int x = 0; x < n; x++) {
            string a = arr[x];
            count[a[0]]++;
            if (a[0] == last)
                v.push_back(a);
        }
        if (v.empty()) {
            cout << '?';
            return 0;
        }
        for (string a : v) {
            if (!count[a[a.size() - 1]] ||
                a[0] == a[a.size() - 1] && count[a[0]] == 1) {
                cout << a << '!';
                return 0;
            }
        }
        cout << v[0];


    return 0;

}