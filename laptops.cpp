#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int> > arr;
    for(int i = 0; i< n; i++){
        int a, b;
        cin >> a >> b;
        pair<int, int > p = make_pair(a,b);
        arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    bool find = false;
    for(int i = 0; i < n -1; i++){
        if(arr[i].second > arr[i+1].second){
            find = true;
        }
    } 
    cout << (find ? "Happy Alex" : "Poor Alex") << endl;
}