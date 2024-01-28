#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c , d ; cin>> a >> b >> c >> d;
    if(b % a == 0)
    {
        int k = b / a;
        if(b * k == c && c * k == d)
        {
            cout << "YES";
        }
        else cout << "NO";
    }
    else cout << "NO";
}