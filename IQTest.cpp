#include <iostream>
using namespace std;

int main(){
    char arr[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j]; 
        }
    }
    int midBlack = 0;
    int midWhite = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int black = 0, white = 0;
            if(arr[i][j] == '#'){
                black++;
            } else{
                white++;
            }
            if(arr[i][j+1] == '#'){
                black++;
            } else{
                white++;
            }
            if(arr[i+1][j] == '#'){
                black++;
            } else{
                white++;
            }
            if(arr[i+1][j+1] == '#'){
                black++;
            } else{
                white++;
            }
            if(black > 2 || white > 2){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}