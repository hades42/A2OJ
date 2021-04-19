#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    long long sx, sy,ex,ey;
    string ways;
    cin >> t >> sx >> sy >> ex >> ey >> ways;
    for(int i = 0; i < t; i++){
        switch(ways[i]){
            case 'E':
                if(ex > sx){
                    sx++;
                }
                break;
            case 'S':
                if(sy > ey){
                    sy--;
                }
                break;
            case 'W':
                if(sx > ex){
                    sx--;
                }
                break;
            case 'N':
                if(ey > sy){
                    sy++;
                }
                break;
            default: 
                break;
        }
            if(sx == ex && sy == ey){
                cout << i+1 << endl;
                return 0;
            }
    }
    cout << -1 << endl;
    return 0;
}