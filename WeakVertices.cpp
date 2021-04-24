#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != -1){
        int arr[n][n];
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            int weak = true;
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(arr[i][j] == 1 && arr[j][k] == 1 && arr[i][k] == 1 && i != j && j != k && i != k){
                        weak = false;
                    }
                }
            }
            if(weak){
                cout << i << " ";
            }
        }
    cout << endl;
    }
}