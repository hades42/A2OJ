#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = n -1; j >= i; j--){
           int count = 0;
            for(int k = 0; k < n; k++){
                if(k >= i && k <= j){
                    count+= 1- arr[k];
                } else{
                count += arr[k];

                }
            }
            res = max(res, count);
        }
    }
    cout << res << endl;
}
