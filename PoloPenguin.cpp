#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> arr(n*m);
    set<int> remain;
    for(int i = 0; i < n * m; i++){
        cin >> arr[i];
        remain.insert(arr[i] % d);
    }
    if(remain.size()> 1){
        cout << -1 << endl;
        return 0;
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    int mid = arr[(n*m-1)/2];
    for(int i = 0; i < n*m; i++){
        count += abs(mid - arr[i])/d;
    }
    cout << count << endl;
}