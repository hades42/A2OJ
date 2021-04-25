#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n); 
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum+= a[i];
        if(a[i] == 0){
           b[i] = 1;
        } else{
            b[i] = -1;
        }
    }
    int temp = b[0];
    int curr = temp;
    for(int i = 1; i < n; i++){
        curr = max(b[i], b[i] + curr);
        temp = max(temp, curr);
    }
    cout << sum + temp << endl;
}