#include <iostream>
#include <vector>
using namespace std;
int MOD = 1000000007;
int main()
{
    long long a, b, n;
    cin >>a >> b >> n;
    long long arr[] = {a, b, b-a, -a, -b, a-b};
    cout << (arr[(n-1) % 6] % MOD + MOD) % MOD << endl;
}