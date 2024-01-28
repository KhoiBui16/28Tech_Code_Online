#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    bool ok = false ; int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        char x ; cin >> x;
        if(x == 'C') ok = true ;
        if(x == '+') ++ans ;
        if(ok && ans >= 2) 
        {
            cout << "YES" ;
            return 0;
        }
    }
    cout << "NO";
}