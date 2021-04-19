#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define ll long long



int main()
{
    int n;
    cin >> n;
    while(n--){
        int cell;
        cin >> cell;
        char arr[cell][cell];
        vector<pair <int ,int> > pa;
        for(int i = 0; i < cell; i++){
            for(int j = 0; j < cell; j++){
                cin >> arr[i][j];
                if(arr[i][j] == '*'){
                    pair<int, int> pair = make_pair(i,j);
                    pa.push_back(pair);
                }
            }
        }
        if(pa[0].second == pa[1].second){
            if(pa[0].second + 1 > cell-1){
                arr[pa[0].first][pa[0].second - 1] = '*';
                arr[pa[1].first][pa[1].second - 1] = '*';
            } else{
                arr[pa[0].first][pa[0].second + 1] = '*';
                arr[pa[1].first][pa[1].second + 1] = '*';
            }
        }
        if(pa[0].first == pa[1].first){
            if(pa[0].first + 1 > cell -1){
                arr[pa[0].first - 1][pa[0].second] = '*';
                arr[pa[1].first - 1][pa[1].second] = '*';
            } else{
                 arr[pa[0].first + 1][pa[0].second] = '*';
                arr[pa[1].first + 1][pa[1].second] = '*';
            }
        }
        if(pa[0].second != pa[1].second){
                arr[pa[0].first][pa[1].second] = '*';
                arr[pa[1].first][pa[0].second] = '*';
        }

        for(int i = 0; i < cell; i++){
            for(int j = 0; j < cell; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}