#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > arr(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pair<int,int> p = make_pair(a,b);
        arr[i] = p;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        bool find = false;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(arr[j].second == arr[i].first){
                find = true;
                break;
            }
        }
        if(!find){
            count++;
        }
    }
    cout << count << endl;
}