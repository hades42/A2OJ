#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<pair<int, int >, int> m;
    int count = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pair<int, int> p = make_pair(a,b);
        m[p]++;
        count = max(count, m[p]);
    }
    cout << count << endl;
}