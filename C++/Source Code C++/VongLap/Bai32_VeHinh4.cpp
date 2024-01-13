#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    for(int i = 'A' ; i <= 'A' + n - 1 ; i++)
    {
        for(int j = 'A' ; j <= i ; j++)
        {
            cout << (char)i << " ";
        }
        cout << endl;
    }
}