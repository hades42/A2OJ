#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main (){
    int n;
    cin >> n;

    map<int, vector<int> > mp;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        mp[num].push_back(i);
    }
    vector<pair<int , int> > ans;
    auto p = mp.begin();
    while(p != mp.end()){
        int num = p -> first;
        if(mp[num].size() == 1){
            pair<int , int > p = make_pair(num, 0);
            ans.push_back(p);
        } else{
            set<int> s;
            for(int i = 1; i < mp[num].size(); i++){
                s.insert(mp[num][i] - mp[num][i-1]);
            }
            auto f = s.begin();
            if(s.size() == 1){
                pair<int,int> p = make_pair(num, *f);
                ans.push_back(p);
            }
        }
        p++;
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}