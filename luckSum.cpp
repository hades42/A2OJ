#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    string input;
    cin >> input;
    ll n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    char last = input[input.length() -1];
    vector<int> count(27);
    vector<string> v;
    for(int i = 0; i< n; i++){
        string a = arr[i];
        count[a[0] - 97]++;
        if(a[0] == last){
            v.push_back(a);
        }
    }
    if(v.empty()){
        cout << "?" << endl;
        return 0;
    } else{
        for(string a : v){
            char fi = a[0];
            char la = a[a.length() -1];
            if((fi == la && count[fi - 97] == 1) || count[la -97] == 0){
                cout << a << "!" << endl;
                return 0;
            }
        }
        cout << v[0] << endl;
    }
}