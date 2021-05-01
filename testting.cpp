#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    int min = 200;
    int posMax;
    int posMin;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
            posMax = i;
        }
        if(arr[i] <= min){
            min = arr[i];
            posMin = i;
        }
    }
    if(posMax > posMin){
        posMin++;
    }
    cout << posMax + (n- (posMin+1)) << endl;
}
