#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> arr(26);
    if(s1.length() != s2.length()){
        cout << "NO" << endl;
        return 0;
    }
    int diff = 0;
    vector<int> pos;
    bool checked = true;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]){
            diff++;
            pos.push_back(i);
        }
    }
    if(diff == 2){
        if(s1[pos[0]] != s2[pos[1]] || s1[pos[1]] != s2[pos[0]]){
            checked = false;
        }

    } else{
        checked = false;
    }
    if(checked){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}