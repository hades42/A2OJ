#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int have = 0;
    int arr[101] = {0};
    for(int i = 0 ; i< n; i++){
        int num;
        cin >> num;
        if(num == 25){
            arr[25]++;
        } else if(num == 50){
            if(arr[25] > 0){
                arr[25]--;
            } else{
                cout << "NO" << endl;
                return 0;
            }
            arr[50]++;
        } else if(num == 100){
            if(arr[25] > 0 && arr[50] > 0){
                arr[50]--;
                arr[25]--;
            } else if(arr[25] > 2){
                arr[25]-=3;
            } else{
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}