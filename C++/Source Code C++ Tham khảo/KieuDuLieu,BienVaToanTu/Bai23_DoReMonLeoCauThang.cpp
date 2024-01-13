#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n , m ; cin >> n >> m;
    if(m > n) cout << -1;
    else
    {
        if(m >= (n / 2 + n % 2)) cout << m;
        else
        {
            cout << (n / 2 + n %2+ m - 1) / m * m;
        }
    }
}