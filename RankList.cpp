#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int,int> a , pair<int,int> b){
    if(a.first == b.first) return a.second < b.second;
    else return b.first < a.first;
}
int main(){
    int n, k;
    cin >> n >> k;
    map<pair<int, int>, int> m;
    vector<pair<int, int> > arr(n);
    for(int i = 0; i < n; i++){
        int a , b;
        cin >> a >> b;
        pair<int, int> p = make_pair(a, b);
        arr[i] = p;
        m[p]++;
    }
    sort(arr.begin(), arr.end(), comp);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i].first << " " << arr[i].second << endl;
    // }
    cout << m[arr[k-1]] << endl;
}