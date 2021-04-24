#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    if(num < 3){
        cout << 1 << endl;
        return 0;
    }
    cout << num -3 + 1 << endl;
    return 0;
}