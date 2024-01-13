#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; cin >> n;
    for(int i = 1 ; i <= n ;i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 'A' + i - 1 ;j <= 'A' + i - 1 + n - 1 ;j++)
            {
                cout << (char)j;
            }
        }
        else
        {
            for(int j = 'a' + i - 1 ;j <= 'a' + i - 1 + n - 1 ;j++)
            {
                cout << (char)j;
            }
        }
        cout << endl;
    }
}