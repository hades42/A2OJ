#include <iostream>
using namespace std;

int main(){
    string line;
    getline(cin, line);
    int n = stoi(line);
    bool find = false;
    string ans;
    while(n--){
        getline(cin, line);
        int menus = stoi(line);
        getline(cin, line);
        string name = line;
        int pea = 0;
        int pan = 0;
        while(menus--){
            getline(cin, line);
            if (line == "pea soup")
            {
                pea++;
            }
            else if (line == "pancakes")
            {
                pan++;
            }
        }
            if(pea > 0 && pan > 0){
                if(!find){
                    ans = name;
                    find = true;
                }
            }
    }
    if(!find){
        cout << "Anywhere is fine I guess" << endl;
    } else{
        cout << ans << endl;
    }
}