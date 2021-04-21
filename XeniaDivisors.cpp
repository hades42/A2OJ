#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[8] = {0};
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }
    if (arr[5] == 0 && arr[7] == 0 && arr[2] >= arr[4] && arr[1] == arr[2] + arr[3] && arr[2] + arr[3] == arr[4] + arr[6])
    {
        for (int i = 0; i < arr[4]; i++)
        {
            cout << "1 2 4" << endl;
        }
        arr[2] -= arr[4];
        for (int i = 0; i < arr[2]; i++)
        {
            cout << "1 2 6" << endl;
        }
        for (int i = 0; i < arr[3]; i++)
        {
            cout << "1 3 6" << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}