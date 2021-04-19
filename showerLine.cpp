#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    int pos[5];
    for(int i = 0; i < 5; i++){
        pos[i] = i;
    }
    long long res = -1;
    long long temp;
    do{
        // 01234
        temp = arr[pos[0]][pos[1]] + arr[pos[1]][pos[0]];
        temp += arr[pos[2]][pos[3]] + arr[pos[3]][pos[2]];

        // 1234
        temp += arr[pos[1]][pos[2]] + arr[pos[2]][pos[1]];
        temp += arr[pos[4]][pos[3]] + arr[pos[3]][pos[4]];

        // 234
        temp += arr[pos[2]][pos[3]] + arr[pos[3]][pos[2]];

        // 34
        temp += arr[pos[3]][pos[4]] + arr[pos[4]][pos[3]];

        if(temp > res){
            res = temp;
        }
    } while(next_permutation(pos, pos+5));

    cout << res << endl;
    return 0;
}