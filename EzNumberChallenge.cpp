#include <iostream>
#include <vector>
using namespace std;
int numDivisor (int n){
    int count = 0;
    for(int i =1; i*i<= n; i++){
        if(n % i == 0){
            if(i*i == n){
                count++;
            } else{
                count+=2;
            }
        }
    }
    return count;
}
int main(){
    int a, b,c;
    cin >> a >> b >> c;
    vector<int> arr(a*b*c + 2);
    int sum = 0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int z = 1; z <= c; z++){
                if(arr[i*j*z] != 0){
                    sum += arr[i*j*z];
                } else{
                   int num = numDivisor(i * j * z);
                   arr[i*j*z] = num; 
                   sum += num;
                }
            }
        }
    }
    cout << sum << endl;
}