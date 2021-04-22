#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
   }
   int sum = 0;
   for(int i = 0; i < k; i++){
       sum += arr[i];
   }
   int min = sum;
   int index = 0;
   for(int i = 1; i <= n-k; i++){
       sum -= arr[i-1];
       sum += arr[i+k-1];
       if(min > sum){
           min = sum;
           index = i;
       }
   }
   cout << index+1 << endl;
}