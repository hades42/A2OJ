#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin ,s2);
    map<char, int> m;
    for(char c : s1){
        if(c == ' ') continue;
        m[c]++;
    }
    for(char c : s2){
        if(c == ' ') continue;
        if(m[c] == 0){
            cout << "NO" << endl;
            return 0;
        }
        m[c]--;
    }
    cout << "YES" << endl;
}