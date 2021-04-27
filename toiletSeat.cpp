#include <iostream>
using namespace std;

int one(string s){
    int res = 0;
    char curr = s[0];
    for(int i = 1; i < s.length(); i++){
        if(curr == 'D'){
            res++;
        } else if(curr == 'U' && s[i] == 'D'){
            res+=2;
        }
        curr = 'U';
    }
    return res;
}
int two(string s){
    int res = 0;
    char curr = s[0];
    for(int i = 1; i < s.length(); i++){
        if(curr == 'U'){
            res++;
        } else if(curr == 'D' && s[i] == 'U'){
            res+=2;
        }
        curr = 'D';
    }
    return res;
}

int three(string s){
    int ans = 0;
    for(int i =1; i < s.length(); i++ ){
        if(s[i] != s[i-1]){
            ans++;
        }
    }
    return ans;
}

int main(){
    string input;
    cin >> input;
    cout << one(input) << endl;
    cout << two(input) << endl;
    cout << three(input) << endl;
}