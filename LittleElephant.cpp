#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string in;
    cin >> in;
    bool zero = false;
    for(int i = 0; i < in.length(); i++){
        if(in[i] == '0'){
            in.erase(i,1);
            zero = true;
            break;
        }
    }
    if(zero){
        cout << in << endl;
    } else{
        cout << in.erase(1,1) << endl;
    }
}