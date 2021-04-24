#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool checkSquare(int n){
    if(n >= 0){
        int sq = sqrt(n);
        
        return sq*sq == n;
    }
    return false;
}
int main(){
    int n, count = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        for(int j = i; i*i + j*j <= n*n; j++){
            int temp = i * i + j * j;
            if(checkSquare(temp)){
                count++;
            }
        }
    }
    cout << count << endl;
}